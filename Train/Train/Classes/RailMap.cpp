#include "pch.h"
#include "IGSingleton.h"
#include "RailMap.h"




template<> RailMap* Singleton<RailMap>::ms_Singleton=NULL;

cocos2d::CCPoint	RailMap::m_ConectArea(5.0f,5.0f);

RailMap::RailMap(cocos2d::CCLayer* pLayer)
:m_pLayer(pLayer)
{
	m_pLayer->retain();
}

RailMap::~RailMap()
{
	

	m_pLayer->release();

	destroyAllRailLine();
}

RailLine* RailMap::addRailLine(const std::string& name,const IG::LineSegment2D& line)
{
	if(getRailLineByName(name)!=NULL)
		return NULL;

     RailLine* pRailLine=new RailLine(name,line);
	// pRailLine->init
	// pRailLine->retain();
	// pRailLine->autorelease();

	 IG::Vector2 HeadPoint,TrailPoint;
	 pRailLine->getHeadPoint(HeadPoint);
	 pRailLine->getTrailPoint(TrailPoint);

	 m_pLayer->addChild(pRailLine);

	 RailLineVector::iterator itBegin=m_RailLineVector.begin();
	 RailLineVector::iterator itEnd=m_RailLineVector.end();
	 for(;itBegin!=itEnd;++itBegin)
	 {
		 IG::Vector2 temHeadPoint;
		 (*itBegin)->getHeadPoint(temHeadPoint);
		 IG::Vector2 temTrailPoint;
		 (*itBegin)->getTrailPoint(temTrailPoint);

		 if(isInConectArea(temHeadPoint,TrailPoint))
		 {
			 pRailLine->addTrailLine(*itBegin);
			 //(*itBegin)->addHeadLine(pRailLine,true	);


		 }else if(isInConectArea(temTrailPoint,HeadPoint))
		 {
			 pRailLine->addHeadLine(*itBegin);
			 //(*itBegin)->addTrailLine(pRailLine,false);

		 }



	 }

	 m_RailLineVector.push_back(pRailLine);


	return pRailLine;

}

RailLine* RailMap::addRailLine(const std::string& name,const IG::Vector2& headPoint,const IG::Vector2&trailPoint)
{


	if(getRailLineByName(name)!=NULL)
		return NULL;

	RailLine* pRailLine=new RailLine(name,headPoint,trailPoint);
	m_pLayer->addChild(pRailLine);

	RailLineVector::iterator itBegin=m_RailLineVector.begin();
	RailLineVector::iterator itEnd=m_RailLineVector.end();
	for(;itBegin!=itEnd;++itBegin)
	{
		IG::Vector2 temHeadPoint;
		(*itBegin)->getHeadPoint(temHeadPoint);
		IG::Vector2 temTrailPoint;
		(*itBegin)->getTrailPoint(temTrailPoint);

		if(isInConectArea(temHeadPoint,trailPoint))
		{
			pRailLine->addTrailLine(*itBegin);
			//(*itBegin)->addHeadLine(pRailLine,true	);


		}else if(isInConectArea(temTrailPoint,headPoint))
		{
			pRailLine->addHeadLine(*itBegin);
			//(*itBegin)->addTrailLine(pRailLine,false);

		}



	}

	 m_RailLineVector.push_back(pRailLine);


	return pRailLine;

}

RailLine* RailMap::getRailLineByName(const std::string& name)const 
{
	RailLineVector::const_iterator itEnd=m_RailLineVector.end();
	RailLineVector::const_iterator itBegin=m_RailLineVector.begin();

	for(;itBegin!=itEnd;++itBegin)
	{
		if((*itBegin)->getName()==name)
			return *itBegin;
	}
	return NULL;
}


void RailMap::destroyAllRailLine()
{
	RailLineVector::const_iterator itEnd=m_RailLineVector.end();
	RailLineVector::const_iterator itBegin=m_RailLineVector.begin();

	for(;itBegin!=itEnd;++itBegin)
	{
	    m_pLayer->removeChild(*itBegin,false);
	   delete *itBegin;
	}
	m_RailLineVector.clear();

	return ;

}

/**判断两个点是否在联接的误差范围以内 */
bool  RailMap::isInConectArea(const IG::Vector2& point1,const IG::Vector2& point2)
{
	float temx=::abs(point2.x-point1.x);
	float temy=::abs(point2.y-point1.y);

	if(temx<=m_ConectArea.x&& temy<=m_ConectArea.y)
		return true;

	return false;
}

void RailMap::setViewPoint(const cocos2d::CCPoint& point)
{


}