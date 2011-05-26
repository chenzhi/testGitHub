#include "pch.h"
#include "Train.h"
#include "RailLine.h"
#include "IGTools.h"

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

	m_LinePercent+=0.0005f;
	if(m_LinePercent>1.0f)
	{
		m_LinePercent=0.0f;
		RailLine* pTemLine=m_pCurrentRailLine->getOpenTrailLine();
	   	if(pTemLine==NULL)
		{
			m_pCurrentRailLine=m_pCurrentRailLine->getOpenHeadLine();
		}else
		{
			m_pCurrentRailLine=pTemLine;
		}
		return ;
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