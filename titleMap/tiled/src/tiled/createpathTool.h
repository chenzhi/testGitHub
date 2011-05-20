#ifndef createPathTool_h_h_h_h_h
#define createPathTool_h_h_h_h_h


#include "abstracttool.h"
#include "poly.h"

class QEvent;


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



		class createPathTool:  public AbstractTool
		{
			Q_OBJECT

		public:
			createPathTool(QObject *parent = 0);

			~createPathTool();


			void updateEnabledState();

		protected:

			virtual void activate(MapScene *scene);

			/**
			* Deactivates this tool. Should do any necessary cleanup to make sure the
			* tool is no longer active.
			*/
			virtual void deactivate(MapScene *scene) ;

			/**
			* Called when the mouse entered the scene. This is usually an appropriate
			* time to make a hover item visible.
			*/
			virtual void mouseEntered();

			/**
			* Called when the mouse left the scene.
			*/
			virtual void mouseLeft();

			/**
			* Called when the mouse cursor moves in the scene.
			*/
			virtual void mouseMoved(const QPointF &pos,
				Qt::KeyboardModifiers modifiers);

			/**
			* Called when a mouse button is pressed on the scene.
			*/
			virtual void mousePressed(QGraphicsSceneMouseEvent *event);

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

			public slots:
				/**
				* Sets the tile that will be used when the creation mode is
				* CreateTileObjects.
				*/
				void setTile(Tile *tile) { mTile = tile; }


		protected:

			MapObject *clearNewMapObjectItem();
			void cancelNewMapObject();
			void finishNewMapObject();




		protected:

			Poly* m_pPoly;
			MapObject* m_pMapObejct;
			MapScene *mMapScene;
			MapObjectItem* mNewMapObjectItem;

			Tile*  mTile;

			bool   m_isCreate;///每次换工具后判断是否加入



		};



	};

};












#endif