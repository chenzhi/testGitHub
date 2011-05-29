#include "createpathTool.h"
#include "mapdocument.h"
#include "objectgroup.h"
#include "mapobject.h"
#include "poly.h"
#include "mapscene.h"
#include "mapobjectitem.h"
#include "utils.h"
#include "addremovemapobject.h"

Tiled::Internal::createPathTool::createPathTool(QObject *parent)
:AbstractTool(tr("创建路径对象"),QIcon(QLatin1String("images/22x22/t2.png")),
			  QKeySequence(tr("C")),parent),m_pPoly(NULL),m_pMapObejct(NULL),
			  mTile(NULL),mNewMapObjectItem(NULL),m_isCreate(false)
{

}

Tiled::Internal::createPathTool::~createPathTool()
{

}


void Tiled::Internal::createPathTool::activate(MapScene *scene)
{
	mMapScene=scene;
	m_isCreate=false;
}

/**mMapScene
* Deactivates this tool. Should do any necessary cleanup to make sure the
* tool is no longer active.
*/
void Tiled::Internal::createPathTool::deactivate(MapScene *scene) 
{
	if(m_isCreate==true&&m_pMapObejct!=NULL&&m_pPoly!=NULL)
	{
		finishNewMapObject();
	}

}

/**
* Called when the mouse entered the scene. This is usually an appropriate
* time to make a hover item visible.
*/
void Tiled::Internal::createPathTool::mouseEntered()
{

}

/**
* Called when the mouse left the scene.
*/
void Tiled::Internal::createPathTool::mouseLeft()
{

}

/**
* Called when the mouse cursor moves in the scene.
*/
void Tiled::Internal::createPathTool::mouseMoved(const QPointF &pos,
								 Qt::KeyboardModifiers modifiers)
{

}

/**
* Called when a mouse button is pressed on the scene.
*/
void Tiled::Internal::createPathTool::mousePressed(QGraphicsSceneMouseEvent *event)
{

	switch (event->button())
	{
	case Qt::RightButton:
		///开始一个新的
		this->finishNewMapObject();
			m_pMapObejct=NULL;
			m_pPoly=NULL;
			mNewMapObjectItem=NULL;
			//MapDocument *pDoc=  mMapScene->mapDocument();
			//pDoc->emitMapChanged();		
	
			break;


	case  Qt::LeftButton:
		//if(mTile==NULL)
		//	break;
		if(m_pPoly==NULL&&m_pMapObejct==NULL)
		{
			std::string polyname="poly";
			static int index=0;
			char temstr[32];
			_snprintf(temstr,32,"%d",index);
			polyname+=temstr;
			index++;
			if (MapDocument *doc = mMapScene->mapDocument())
			{
				ObjectGroup* pGroup = dynamic_cast<ObjectGroup*>(doc->currentLayer());
				if(pGroup==NULL)
					break;

				m_pPoly =new Tiled::Poly(polyname);
				m_pMapObejct=new Tiled::MapObject();
				m_pMapObejct->setPoly(m_pPoly);
				pGroup->addObject(m_pMapObejct);

				mNewMapObjectItem = new MapObjectItem(m_pMapObejct,	doc);
				mNewMapObjectItem->setZValue(10000);
				mMapScene->addItem(mNewMapObjectItem);
				mapDocument()->emitObjectAdded(m_pMapObejct);
                doc->emitMapChanged();		
				m_isCreate=true;
			

			}
	

		}
		if(m_pPoly!=NULL&&mNewMapObjectItem!=NULL)
		{
			QPointF pos=event->scenePos();
			m_pPoly->addPoint(pos);
			//mNewMapObjectItem->syncWithMapObject();
			mapDocument()->emitMapChanged();

		}
		
		
		break;;
	}



	//m_PointVector


}

/**
* Called when a mouse button is released on the scene.
*/
void Tiled::Internal::createPathTool::mouseReleased(QGraphicsSceneMouseEvent *event)
{

}

/**
* Called when the user presses or releases a modifier key resulting
* in a change of modifier status, and when the tool is enabled with
* a modifier key pressed.
*/
void Tiled::Internal::createPathTool::modifiersChanged(Qt::KeyboardModifiers) 
{

}

/**
* Called when the application language changed.
*/
void Tiled::Internal::createPathTool::languageChanged()
{

}
void Tiled::Internal::createPathTool::updateEnabledState()
{
	bool enabled = false;
	if (MapDocument *doc = mapDocument())
		enabled = (dynamic_cast<ObjectGroup*>(doc->currentLayer()) != 0);

	setEnabled(enabled);
}




Tiled::MapObject *Tiled::Internal::createPathTool::clearNewMapObjectItem()
{
	Q_ASSERT(mNewMapObjectItem);

	//MapObject *newMapObject = mNewMapObjectItem->mapObject();

	ObjectGroup *objectGroup = m_pMapObejct->objectGroup();
	objectGroup->removeObject(m_pMapObejct);
	mapDocument()->emitObjectRemoved(m_pMapObejct);

	//mMapScene->removeItem(mNewMapObjectItem);
	delete mNewMapObjectItem;
	mNewMapObjectItem = 0;

	return m_pMapObejct;
}

void Tiled::Internal::createPathTool::cancelNewMapObject()
{
	MapObject *newMapObject = clearNewMapObjectItem();
	delete newMapObject;
}

void Tiled::Internal::createPathTool::finishNewMapObject()
{
	Q_ASSERT(m_pMapObejct);
	//MapObject *newMapObject = mNewMapObjectItem->mapObject();
	ObjectGroup *objectGroup = m_pMapObejct->objectGroup();
	Q_ASSERT(objectGroup);
	clearNewMapObjectItem();

	MapDocument *mapDocument = mMapScene->mapDocument();
	mapDocument->undoStack()->push(new AddMapObject(mapDocument,
		objectGroup,
		m_pMapObejct));
	m_isCreate=false;
}
