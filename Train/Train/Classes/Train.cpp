#include "pch.h"
#include "Train.h"
#include "RailLine.h"
#include "Tools.h"

Train::Train(cocos2d::CCLayer* pLayer)
:m_pSprite(NULL),m_pCurrentRailLine(NULL),m_LinePercent(0.0)
{
	m_pSprite=new cocos2d::CCSprite();
	m_pSprite->initWithFile("CloseNormal.png");
	//m_pSprite=	cocos2d::CCSprite::spriteWithFile("CloseNormal.png");
	//m_pSprite->retain();
	//int cc=m_pSprite->retainCount();

	pLayer->addChild(m_pSprite);

}


Train::~Train()
{

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

void  Train::update(float time)
{
	if(m_pCurrentRailLine==NULL)
		return ;

	m_LinePercent+=0.005f;
	if(m_LinePercent>1.0f)
	{
		m_LinePercent=0.0f;
	    m_pCurrentRailLine=m_pCurrentRailLine->getOpenTrailLine();
		return ;
	}

	cocos2d::CCPoint TemPoint=m_pCurrentRailLine->getPointByPercent(m_LinePercent);
	if(m_pSprite!=NULL)
	{
		m_pSprite->setPosition(TemPoint);
	}

	updateOrientate();

}

void Train::setCurrentRailLine(RailLine* pLine)
{
	
	m_pCurrentRailLine=pLine;
}

void Train::updateOrientate()
{
	if(m_pCurrentRailLine==NULL)
	{
		return ;
	}
	cocos2d::CCPoint headPoint=m_pCurrentRailLine->getHeadPoint();
	cocos2d::CCPoint trailPoint=m_pCurrentRailLine->getTrailPoint();

	cocos2d::CCPoint dir=NormalPoint(trailPoint-headPoint);
	cocos2d::CCPoint xdir(1.0f,0.0f);


    float leng=length(dir);
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