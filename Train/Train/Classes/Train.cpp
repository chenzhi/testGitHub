#include "pch.h"
#include "Train.h"
#include "RailLine.h"
#include "IGTools.h"

Train::Train(cocos2d::CCLayer* pLayer)
:m_pSprite(NULL),m_pCurrentRailLine(NULL),m_LinePercent(0.0),m_State(NONE)
{
	m_pSprite=new cocos2d::CCSprite();
	m_pSprite->initWithFile("CloseNormal.png");
	//m_pSprite=	cocos2d::CCSprite::spriteWithFile("CloseNormal.png");
	//m_pSprite->retain();
	//int cc=m_pSprite->retainCount();

	pLayer->addChild(m_pSprite);

	cocos2d::CCTouchDispatcher::sharedDispatcher()->addTargetedDelegate(this,0,true);



}


Train::~Train()
{

	cocos2d::CCTouchDispatcher::sharedDispatcher()->removeDelegate(this);
	if(m_pSprite!=NULL)
	{
		delete m_pSprite;
		//m_pSprite->release();

		int cc=m_pSprite->retainCount();

	}

}

void Train::setPosition(const cocos2d::CCPoint& point)
{
	if(m_pSprite!=NULL)
	{
		m_pSprite->setPosition(point);
	}

}
cocos2d::CCPoint Train::getPosition()const
{
	assert(m_pSprite);
	return 	m_pSprite->getPosition();
}

void  Train::update(float time)
{

	if(m_State==NONE)
		return ;

	if(m_pCurrentRailLine==NULL)
		return ;

	static bool b=true;


	m_LinePercent+=b?0.005f:-0.005f;
	if(m_LinePercent>1.0f||m_LinePercent<0.0f)
	{
		b=!b;

		//m_LinePercent=0.0f;
		//RailLine* pTemLine=m_pCurrentRailLine->getOpenTrailLine();
	 //  	if(pTemLine==NULL)
		//{
		//	RailLine* pHeadLine=m_pCurrentRailLine->getOpenHeadLine();
		//	if(pHeadLine!=NULL)
		//	{
		//		pTemLine=pHeadLine;
		//	}else
		//	{
		//		b=!b;
		//	}
		//}else
		//{
		//	m_pCurrentRailLine=pTemLine;
		//}


		return ;
	}else
	{

	}

	IG::Vector2 TemPoint,beforePoint,afterPoint;
	m_pCurrentRailLine->getPercentPoint(m_LinePercent,TemPoint,beforePoint,afterPoint);
	if(m_pSprite!=NULL)
	{
		m_pSprite->setPosition(cocos2d::CCPoint(TemPoint.x,TemPoint.y));
	}

	updateOrientate(beforePoint,afterPoint);

}

void Train::setCurrentRailLine(RailLine* pLine)
{
	
	m_pCurrentRailLine=pLine;
}

void Train::updateOrientate(const IG::Vector2& p0,const IG::Vector2& p1)
{
	

	IG::Vector2 dir=(p1-p0);
	dir.normalise();
	IG::Vector2 xdir(1.0f,0.0f);


    float leng=dir.length();
	leng=1.0f/leng;
	float angle=acos(dir.x);
	angle*=(180.0f/3.1415926f);

	

	if(m_pSprite!=NULL)
	{
		float currentAngle=m_pSprite->getRotation();
		angle=currentAngle+(angle-currentAngle)*0.05f;
		m_pSprite->setRotation(angle);
	}




}

//-------------------------------------------------------------------
bool Train::containsTouchLocation(cocos2d::CCTouch* touch)
{



	return true;
}

//-------------------------------------------------------------------
bool Train::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event)
{

	cocos2d::CCPoint point=touch->locationInView(touch->view());
	point=cocos2d::CCDirector::sharedDirector()->convertToGL( point );
	::printf("x:%d,,y:%d \n",&point.x,&point.y);
	return true;
}

//-------------------------------------------------------------------
void Train::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event)
{
	return ;
}

//-------------------------------------------------------------------
void Train::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event)
{

}
