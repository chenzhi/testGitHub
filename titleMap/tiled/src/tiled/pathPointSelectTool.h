#ifndef pathPointSelectTool_h_h_h_h_h_h
#define pathPointSelectTool_h_h_h_h_h_h

#include "abstracttool.h"
#include "mapscene.h"
#include "mapdocument.h"
#include "objectgroup.h"
#include "mapobject.h"
#include "poly.h"
#include <QUndoCommand>
#include <QGraphicsItem>

namespace Tiled 
{


	class MapObject;
	class Poly;
	class Tile;
	class ObjectGroup;
  


	namespace Internal 
	{


		class MapDocument;
		class MapScene;
		class MapObjectItem;
		class SelectionRectangle;



		class PolyGraphics :public QGraphicsItem
		{
		public:

			PolyGraphics()
				:m_pMapObject(NULL)
			{};


		    QRectF boundingRect() const ;

			void setMapObject(MapObject* pobject,unsigned index=0)
			{
				m_pMapObject=pobject;
				m_selectIndex=index;
				
			}

			void paint(QPainter *painter,
				const QStyleOptionGraphicsItem *option,
				QWidget *widget = 0);





		protected:

			MapObject* m_pMapObject;

			unsigned int m_selectIndex;


		};


	



		/**�ƶ����command*/
		class  MovePathPoint :  public QUndoCommand
		{
		public:

			MovePathPoint(MapDocument *mapDocument,
				MapObject *mapObject,
				const QPointF &oldPos,unsigned int pointindex)
				:m_pDoc(mapDocument),m_pOjbect(mapObject),m_oldPos(oldPos),m_index(pointindex)
			{
				if(m_pOjbect!=NULL&&m_pOjbect->getPoly()!=NULL)
				{
					m_newPos=m_pOjbect->getPoly()->getPointByIndex(m_index);
				}

			}

			void undo()
			{
				if(m_pOjbect!=NULL&&m_pOjbect->getPoly()!=NULL)
				{
					m_pOjbect->getPoly()->setPointPos(m_index,m_oldPos);
				}
				m_pDoc->emitMapChanged();

			}
			void redo()
			{

				if(m_pOjbect!=NULL&&m_pOjbect->getPoly()!=NULL)
				{
					m_pOjbect->getPoly()->setPointPos(m_index,m_newPos);
				}

				m_pDoc->emitMapChanged();

			}
		protected:
			MapDocument* m_pDoc;
			MapObject*   m_pOjbect;
			QPointF      m_newPos;
			QPointF      m_oldPos;
			unsigned int m_index;



		};




 
		class pathPointSelectTool : public AbstractTool
		{
		public:

			pathPointSelectTool(QObject *parent = 0);

			~pathPointSelectTool();


   
			enum Mode {
				NoMode,
				Selecting,
				Moving
			};




		protected:


			/**
			* Activates this tool. If the tool plans to add any items to the scene, it
			* probably wants to do it here.
			*/
			virtual void activate(MapScene *scene) ;

			/**
			* Deactivates this tool. Should do any necessary cleanup to make sure the
			* tool is no longer active.
			*/
			virtual void deactivate(MapScene *scene) ;

			/**
			* Called when the mouse entered the scene. This is usually an appropriate
			* time to make a hover item visible.
			*/
			virtual void mouseEntered() ;

			/**
			* Called when the mouse left the scene.
			*/
			virtual void mouseLeft() ;

			/**
			* Called when the mouse cursor moves in the scene.
			*/
			virtual void mouseMoved(const QPointF &pos,
				Qt::KeyboardModifiers modifiers) ;

			/**
			* Called when a mouse button is pressed on the scene.
			*/
			virtual void mousePressed(QGraphicsSceneMouseEvent *event) ;

			/**
			* Called when a mouse button is released on the scene.
			*/
			virtual void mouseReleased(QGraphicsSceneMouseEvent *event);

			/**
			* Called when the user presses or releases a modifier key resulting
			* in a change of modifier status, and when the tool is enabled with
			* a modifier key pressed.
			*/
			virtual void modifiersChanged(Qt::KeyboardModifiers);

			/**
			* Called when the application language changed.
			*/
			virtual void languageChanged();


			/**�ж�ѡ��Χ�Ƿ���·����
			*/
			void         updateSelectPoint();


            /**�ж��ᶨ�ĵ��Ƿ���ѡ�����
			*/
			bool          isInSelectPoint(const QPointF& point);


			/**��ʼѡ��*/
			void          selectStart();

			/**��ʼ�ƶ�*/ 
			void          moveStart();

			/**�ƶ�ѡ��ĵ�
			*/
			void           moveSelectPoint(const QPointF& point);

			///�ж�·�����ĸ�����ѡ����ε���
            bool             testPloyInRect(const QRectF& rect,Poly* pPloy,MapObject* pObject);

			/**���ʵ�ʵ��ƶ�����*/
			void           finishMove();


		protected:
			MapScene *         mMapScene;
			Poly*              m_pPoly;
			MapObject*         m_pMapObejct;
			int                m_SelectPointIndex;
			Mode               m_Mode;
			QPointF            m_StartPoint;
			QPointF            m_EndPoint;
			SelectionRectangle*m_pSelectRect;///ѡ���Ŀ�
			PolyGraphics*      m_pSelectPolyGraphics;//��ѡ�����
			bool               m_leftdown;///����Ƿ���
			QPointF            m_oldPoint;



		};

	};
};

















#endif