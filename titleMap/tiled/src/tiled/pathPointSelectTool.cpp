#include "pathPointSelectTool.h"
#include "objectselectiontool.h"
#include "mapobject.h"
#include "utils.h"

#include <QApplication>
#include <QGraphicsItem>
#include <QMenu>
#include <QPainter>
#include <QPalette>
#include <QUndoStack>
#include <QObject>
#include <QPalette>
#include "maprenderer.h"

namespace Tiled 
{



	namespace Internal 
	{



		QRectF PolyGraphics::boundingRect() const 
		{
			if(m_pMapObject==NULL||m_pMapObject->getPoly()==NULL)
				return QRectF();
			return m_pMapObject->getPoly()->boundingRect();

		}



		void PolyGraphics::paint(QPainter *painter, const QStyleOptionGraphicsItem *option,QWidget *widget)
		{
			if(m_pMapObject==NULL||m_pMapObject->getPoly()==NULL)
				return ;

			MapScene* pMapScene=dynamic_cast<MapScene*>(this->scene());
			if(pMapScene==NULL)
				return ;
			MapDocument* pDoc=pMapScene->mapDocument();
			if(pDoc==NULL)
				return ;
			
     		QPointF pos=m_pMapObject->position();
			pos=pDoc->renderer()->tileToPixelCoords(pos);
			Poly* m_pPoly=m_pMapObject->getPoly();
			unsigned int size=m_pPoly->getPointCount();

			
			//if(size>1)
			{
				QColor green(0,255,0);
				QPen greenpen(green, 2, Qt::DashLine);
				QPainterPath path;
				

				path.moveTo(m_pPoly->getPointByIndex(0)+pos);
 
				painter->drawEllipse(m_pPoly->getPointByIndex(0)+pos,3,3);

				for(unsigned int i=1;i<size;++i)
				{
					QPointF point=m_pPoly->getPointByIndex(i);
					painter->setPen(greenpen);
					
					///如果是选中的索引需要突出表殃
					if(i==m_selectIndex)
					{
						QColor green(255,255,0);
						QPen greenpen(green, 2, Qt::DashLine);
						painter->setPen(greenpen);
						 painter->drawEllipse(point+pos,3,3);


					}else
					{
                       painter->drawEllipse(point+pos,3,3);
					}
					
					path.lineTo(point+pos);

				}

				QColor red(255,0,0);
				QPen pen(red, 2, Qt::DashLine);
				painter->setPen(pen);
				painter->drawPath(path);
			}


		}







		pathPointSelectTool::pathPointSelectTool(QObject *parent)
			:AbstractTool(tr("选择路径点"),QIcon(QLatin1String("images/22x22/t1.png")),
			QKeySequence(tr("T")),parent),m_pPoly(NULL),m_pMapObejct(NULL),m_SelectPointIndex(-1),
			m_Mode(NoMode),m_pSelectRect(new SelectionRectangle()),m_leftdown(false),m_pSelectPolyGraphics(new PolyGraphics() )
		{
			m_pSelectRect->setZValue(10000);
	    }

		

		pathPointSelectTool::~pathPointSelectTool()
		{
          if(m_pSelectRect!=NULL)
		  {
			
			  delete m_pSelectRect;
		  }
		  delete m_pSelectPolyGraphics;
		}

		void  pathPointSelectTool::activate(MapScene *scene) 
		{
	       mMapScene=scene;
		   mMapScene->addItem(m_pSelectRect);
		   mMapScene->addItem(m_pSelectPolyGraphics);
		   m_pPoly=NULL;
		}

		/**
		* Deactivates this tool. Should do any necessary cleanup to make sure the
		* tool is no longer active.
		*/
		void pathPointSelectTool::deactivate(MapScene *scene) 
		{
                mMapScene->removeItem(m_pSelectRect);
				mMapScene->removeItem(m_pSelectPolyGraphics);
				m_pSelectPolyGraphics->setMapObject(NULL);
		}

		/**
		* Called when the mouse entered the scene. This is usually an appropriate
		* time to make a hover item visible.
		*/
		void pathPointSelectTool::mouseEntered() 
		{

		}

		/**
		* Called when the mouse left the scene.
		*/
		void pathPointSelectTool::mouseLeft() 
		{

		}

		/**
		* Called when the mouse cursor moves in the scene.
		*/
		void pathPointSelectTool::mouseMoved(const QPointF &pos,
			Qt::KeyboardModifiers modifiers) 
		{
			if(m_leftdown==true&&m_Mode==NoMode)
			{
				m_pSelectRect->setRectangle(QRectF(m_StartPoint,pos).normalized());
			}

			if(m_Mode==Moving)
			{
				moveSelectPoint(pos);

			}

				MapDocument *pDoc=  mMapScene->mapDocument();
					pDoc->emitMapChanged();		

		}

		/**
		* Called when a mouse button is pressed on the scene.
		*/
		void pathPointSelectTool::mousePressed(QGraphicsSceneMouseEvent *event) 
		{
		
			if(event->button()==Qt::LeftButton)
			{
				m_leftdown=true;
				if(m_Mode==NoMode)
				{
					m_StartPoint=event->scenePos();
				}else if(m_Mode==Selecting)
				{
					if(m_pSelectRect->boundingRect().contains(event->scenePos()))
					{
						moveStart();
					}else
					{
						m_Mode=NoMode;
						m_pSelectRect->setRectangle(QRectF());
						m_pSelectPolyGraphics->setMapObject(NULL);
						m_StartPoint=event->scenePos();
					}
				}
			}else if(event->button()==Qt::RightButton)
			{
				if(m_Mode==Moving)
				{
					m_pPoly->setPointPos(m_SelectPointIndex,m_oldPoint);
					m_pSelectRect->setRectangle(QRectF(m_oldPoint,QSizeF(8.0f,8.0f)));
					m_pSelectPolyGraphics->setMapObject(NULL);
					m_Mode=Selecting;


					
				}
			}

					MapDocument *pDoc=  mMapScene->mapDocument();
					pDoc->emitMapChanged();			

		}

		/**
		* Called when a mouse button is released on the scene.
		*/
		void pathPointSelectTool::mouseReleased(QGraphicsSceneMouseEvent *event)
		{
			
			if(event->button()==Qt::LeftButton)
			{
				m_leftdown=false;
                
				if(m_Mode==NoMode)
				{
					m_EndPoint=event->scenePos();
					selectStart();

				}else if(m_Mode==Moving)
				{
					m_Mode=Selecting;
					finishMove();
									
				}
			}

		}

		/**
		* Called when the user presses or releases a modifier key resulting
		* in a change of modifier status, and when the tool is enabled with
		* a modifier key pressed.
		*/
		void pathPointSelectTool::modifiersChanged(Qt::KeyboardModifiers)
		{


		}

		void pathPointSelectTool::languageChanged()
		{

		}

		bool   pathPointSelectTool::isInSelectPoint(const QPointF& point)
		{

			return true;

		}

		void  pathPointSelectTool::selectStart()
		{
			if (MapDocument *doc = mMapScene->mapDocument())
			{
				ObjectGroup* pGroup = dynamic_cast<ObjectGroup*>(doc->currentLayer());
				if(pGroup==NULL)
					return ;
				int count=pGroup->objectCount();
				for(int i=0;i<count;++i)
				{
					MapObject* pObject=	pGroup->objects().at(i);
					if(pObject==NULL||pObject->getPoly()==NULL)
					{
						continue;
					}

					///判断是否选中了路径
					QRectF rect(m_StartPoint,m_EndPoint);
					if(testPloyInRect(rect,pObject->getPoly(),pObject))
					{
						m_pMapObejct=pObject;

						QPointF pos=m_pPoly->getPointByIndex(m_SelectPointIndex);
						QPointF objectPos=m_pMapObejct->position();
						objectPos=doc->renderer()->tileToPixelCoords(objectPos);
						m_pSelectRect->setRectangle(QRectF(pos+objectPos,QSizeF(8,8)));
						m_pSelectPolyGraphics->setMapObject(m_pMapObejct,m_SelectPointIndex);
						m_Mode=Selecting;
						return ;;
					}
				
				}

             m_pSelectRect->setRectangle(QRectF());

			}



		}

		void pathPointSelectTool::moveStart()
		{
			m_Mode=Moving;
			m_oldPoint=m_pPoly->getPointByIndex(m_SelectPointIndex);


		}

		void pathPointSelectTool::moveSelectPoint(const QPointF& point)
		{
			if(m_pPoly==NULL)
			   return ;

			QPointF objectPos=m_pMapObejct->position();
			objectPos=mMapScene->mapDocument()->renderer()->tileToPixelCoords(objectPos);
			

			m_pPoly->setPointPos(m_SelectPointIndex,point-objectPos);
            m_pSelectRect->setRectangle(QRectF(point,QSizeF(8.0f,8.0f)));


		}

		///判断路径的哪个点在选择距形当中
		bool pathPointSelectTool::testPloyInRect(const QRectF& rect,Poly* pPloy,MapObject* pObject)
		{
			if(pPloy==NULL)
				return false;
			QPointF titlePos=pObject->position();
			titlePos=mapDocument()->renderer()->tileToPixelCoords(titlePos);

			int count=pPloy->getPointCount();
			for(int i=0;i<count;++i)
			{
				if(rect.contains(pPloy->getPointByIndex(i)+titlePos))
				{
					m_SelectPointIndex=i;
					m_pPoly=pPloy;
					return true;
				}
			}
			return false;

		}



		/**完成实际的移动命令*/
		void pathPointSelectTool::finishMove()
		{
			QUndoStack *undoStack = mMapScene->mapDocument()->undoStack();
			undoStack->beginMacro(tr("移动路径点"));
			undoStack->push(new MovePathPoint(mMapScene->mapDocument(),m_pMapObejct,m_oldPoint,m_SelectPointIndex));
			undoStack->endMacro();
			return ;

		}

		}


}