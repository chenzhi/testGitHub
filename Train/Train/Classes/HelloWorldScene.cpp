#include "HelloWorldScene.h"
#include "Config.h"


using namespace cocos2d;


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
    bool bRet = true;
  

	CCTMXTiledMap *pMap=CCTMXTiledMap::tiledMapWithTMXFile("TrainType.tmx");
	if(pMap==NULL)
		return false;


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



    return bRet;
}

void HelloWorld::menuCloseCallback(CCObject* pSender)
{
    // "close" menu item clicked
    CCDirector::sharedDirector()->end();
}

