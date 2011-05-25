#include "pch.h"
#include "HelloWorldScene.h"
#include "Config.h"
#include "Train.h"
#include "RailLine.h"
#include "RailMap.h"
#include "StringUtil.h"

using namespace cocos2d;


HelloWorld::HelloWorld()
:m_pRailMap(NULL),m_pTrain(NULL)
{

}


HelloWorld::~HelloWorld()
{
 destroyRailManager();
}


CCScene* HelloWorld::scene()
{
    CCScene * scene = NULL;
    do 
    {
        // 'scene' is an autorelease object
        scene = CCScene::node();
        CC_BREAK_IF(! scene);

        // 'layer' is an autorelease object
        HelloWorld *layer = HelloWorld::node();
        CC_BREAK_IF(! layer);

        // add layer as a child to scene
        scene->addChild(layer);
    } while (0);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
	CCLayer::init();
    bool bRet = true;
  

	CCTMXTiledMap *pMap=CCTMXTiledMap::tiledMapWithTMXFile("TrainType.tmx");
	if(pMap==NULL)
		return false;

	initLineMap(pMap);




	CCTMXLayer* pLayerBack=pMap->layerNamed("BackGround");
	if(pLayerBack!=NULL)
	{
		CCTMXTilesetInfo* pTitlesInofo=pLayerBack->getTileSet();
		if(pTitlesInofo!=NULL)
		{
			int rowCount=pTitlesInofo->m_tTileSize.width;
			int columnCount=pTitlesInofo->m_tTileSize.height;

			rowCount=pLayerBack->getLayerSize().width;
			columnCount=pLayerBack->getLayerSize().height;

			for(int i=0;i<columnCount;++i)
			{
				for(int j=0;j<rowCount;++j)
				{
					CCSprite* pSprite=pLayerBack->tileAt(CCPoint(j,i));
					if(pSprite!=NULL)
					{

						ccV3F_C4B_T2F_Quad Quad=pSprite->getQuad();
					    float u= Quad.bl.texCoords.u;
						float v= Quad.bl.texCoords.v;

						int m=0;
						++m;
							 
						 
					}else
					{
						int cc=0;
						cc++;
					}


				}
			}


			
		}


	}

	CCTMXObjectGroup* pTrainTypeGroup=pMap->groupNamed("TrainsType");
	if(pTrainTypeGroup!=NULL)
	{


		CCMutableArray<CCStringToStringDictionary*>* pObjects=pTrainTypeGroup->getObjects();
	    int count=pObjects->count();
		for(int i=0;i<count;++i)
		{
			CCStringToStringDictionary* pDic=pObjects->getObjectAtIndex(i);
			if(pDic!=NULL)
			{

				std::string	key;
				CCString* pValue;
				pDic->begin();
				pValue=pDic->next(&key);
				while(pValue!=NULL)
				{
					std::string v=pValue->m_sString;
					pValue=pDic->next(&key);

				}

				char KeyValue[256];
				int keyindex=0;
				while(true)
				{
                  sprintf(KeyValue,"input%d",keyindex);
				  CCString*pstrValue= pDic->objectForKey(KeyValue);
				 
				  if(pstrValue==NULL)
				  {
					  break;
				  }

				  const char* ptemValue=pstrValue->m_sString.c_str();
				  float x,y;
				  sscanf(ptemValue,"x:%f y:%f",&x,&y);


				   ++keyindex;

				}

				while(true)
				{
					sprintf(KeyValue,"output%d",keyindex);
					CCString*pstrValue= pDic->objectForKey(KeyValue);

					if(pstrValue==NULL)
					{
						break;
					}

					const char* ptemValue=pstrValue->m_sString.c_str();
					float x,y;
					sscanf(ptemValue,"x:%f y:%f",&x,&y);

					++keyindex;

				}
				



			}


		}

	}



	this->addChild(pMap);


	initRailManger();


    return bRet;
}

void HelloWorld::menuCloseCallback(CCObject* pSender)
{
    // "close" menu item clicked
    CCDirector::sharedDirector()->end();
}


void HelloWorld::initRailManger()
{
	m_pRailMap=new RailMap(this);
	int index=0;

   m_pTrain = new Train(this);

	m_pRailMap->addRailLine("first",cocos2d::CCPoint(0.0f,200.0f),cocos2d::CCPoint(100.0f,200));
	m_pRailMap->addRailLine("second",cocos2d::CCPoint(100.0f,200.0f),cocos2d::CCPoint(200.0f,100.0f));


	RailLine* pLine=m_pRailMap->getRailLineByName("first");
	m_pTrain->setCurrentRailLine(pLine);
	this->schedule((SEL_SCHEDULE)&HelloWorld::update);

	return ;

}

void HelloWorld::destroyRailManager()
{
	if(m_pRailMap!=NULL)
	{
		delete m_pRailMap;
		m_pRailMap=NULL;
	}

	if(m_pTrain!=NULL)
	{
		delete m_pTrain;
		m_pTrain=NULL;
	}
	this->unschedule((SEL_SCHEDULE)&HelloWorld::update);

}

void  HelloWorld::update(cocos2d::ccTime dt)
{
	if(m_pTrain!=NULL)
		m_pTrain->update(dt);

}

///初始化所有的线信息
void  HelloWorld::initLineMap(cocos2d::CCTMXTiledMap* pMap)
{
	if(pMap==NULL)
		return ;


	CCTMXObjectGroup* pTrainTypeGroup=pMap->groupNamed("TrainsType");
	if(pTrainTypeGroup!=NULL)
	{


		CCMutableArray<CCStringToStringDictionary*>* pObjects=pTrainTypeGroup->getObjects();
		int count=pObjects->count();
		for(int i=0;i<count;++i)
		{
			CCStringToStringDictionary* pDic=pObjects->getObjectAtIndex(i);
			if(pDic!=NULL)
			{

				std::string	key;
				CCString* pValue;
				pDic->begin();
				pValue=pDic->next(&key);
				while(pValue!=NULL)
				{
					CCString*pstrValue=pDic->objectForKey("path");

					std::string v=pstrValue->m_sString;

					std::vector<std::string> pointList=StringUtil::split(v," ");

					int pointSize=pointList.size()/2;
					for(int j=0;j<pointSize;++j)
					{
						int x=0,y=0;
						x=StringUtil::parseInt(pointList[2*j]);
						y=StringUtil::parseInt(pointList[2*j+1]);
						CCPoint point(x,y);

					}

					pValue=pDic->next(&key);

				}

			}


		}

		return ;
	}
}