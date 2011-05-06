#include "pch.h"
#include "RailMap.h"




RailMap* Singleton<RailMap>::ms_Singleton=NULL;

cocos2d::CCPoint	RailMap::m_ConectArea(5.0f,5.0f);

RailMap::RailMap()
{
}

RailMap::~RailMap()
{

	destroyAllRailLine();
}

bool RailMap::addRailLine(const std::string& name,const cocos2d::CCPoint& headPoint,const cocos2d::CCPoint&trailPoint)
{


	if(getRailLineByName(name)!=NULL)
		return false;

	RailLine* pRailLine=new RailLine(name,headPoint,trailPoint);

	RailLineVector::iterator itBegin=m_RailLineVector.begin();
	RailLineVector::iterator itEnd=m_RailLineVector.end();
	for(;itBegin!=itEnd;++itBegin)
	{
		cocos2d::CCPoint temHeadPoint=(*itBegin)->getHeadPoint();
		cocos2d::CCPoint temTrailPoint=(*itBegin)->getHeadPoint();

		if(isInConectArea(temHeadPoint,trailPoint))
		{


		}else if(isInConectArea(temTrailPoint,headPoint))
		{

		}



	}



	return true;

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
	return *itBegin;
}


void RailMap::destroyAllRailLine()
{
	RailLineVector::const_iterator itEnd=m_RailLineVector.end();
	RailLineVector::const_iterator itBegin=m_RailLineVector.begin();

	for(;itBegin!=itEnd;++itBegin)
	{
	   delete *itBegin;
	}
	m_RailLineVector.clear();

	return ;

}

/**判断两个点是否在联接的误差范围以内 */
bool  RailMap::isInConectArea(const cocos2d::CCPoint& point1,const cocos2d::CCPoint& point2)
{
	float temx=abs(point2.x-point1.x);
	float temy=abs(point2.y-point1.y);

	if(temx<=m_ConectArea.x&& temy<=m_ConectArea.y)
		return true;

	return false;
}