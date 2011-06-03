#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__



class RailMap;
class Train;
class cocos2d::CCTMXTiledMap;

class HelloWorld : public cocos2d::CCLayer
{
public:

	HelloWorld();

	~HelloWorld();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  

    // there's no 'id' in cpp, so we recommand to return the exactly class pointer
    static cocos2d::CCScene* scene();
    
    // a selector callback
    virtual void menuCloseCallback(CCObject* pSender);

    // implement the "static node()" method manually
    LAYER_NODE_FUNC(HelloWorld);
	

	void update(cocos2d::ccTime dt);


	///初始化所有的线信息
	void initLineMap(cocos2d::CCTMXTiledMap* pMap);

protected:

	void initRailManger();

	void destroyRailManager();



private:
	RailMap*  m_pRailMap;

	Train*    m_pTrain;

	cocos2d::CCTMXTiledMap *m_pMap;


};

#endif  // __HELLOWORLD_SCENE_H__