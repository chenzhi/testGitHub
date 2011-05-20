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


	



		/**移动点的command*/
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


			/**判断选择范围是否有路径点
			*/
			void         updateSelectPoint();


            /**判断提定的点是否在选择点上
			*/
			bool          isInSelectPoint(const QPointF& point);


			/**开始选择*/
			void          selectStart();

			/**开始移动*/ 
			void          moveStart();

			/**移动选择的点
			*/
			void           moveSelectPoint(const QPointF& point);

			///判断路径的哪个点在选择距形当中
            bool             testPloyInRect(const QRectF& rect,Poly* pPloy,MapObject* pObject);

			/**完成实际的移动命令*/
			void           finishMove();


		protected:
			MapScene *         mMapScene;
			Poly*              m_pPoly;
			MapObject*         m_pMapObejct;
			int                m_SelectPointIndex;
			Mode               m_Mode;
			QPointF            m_StartPoint;
			QPointF            m_EndPoint;
			SelectionRectangle*m_pSelectRect;///选择点的框
			PolyGraphics*      m_pSelectPolyGraphics;//画选择的线
			bool               m_leftdown;///左键是否按下
			QPointF            m_oldPoint;



		};

	};
};

















#endif