#include "pch.h"
#include "RailLine.h"



RailLine::RailLine(const std::string& name, const cocos2d::CCPoint&head ,const cocos2d::CCPoint& trail)
:m_Name(name)
{
	m_HeadPoint=head;
	m_TrailPoint=trail;

}


RailLine::~RailLine()
{

}


void  RailLine::addTrailLine(RailLine* pLine,bool head)
{
	if(pLine==NULL)
		return ;
	if(isTrailLine(pLine))
		return ;
	
	///默认第一个连接的线路是开通的
	if(m_TrailRailVector.empty())
		pLine->setBreak(false);

	m_TrailRailVector.push_back(pLine);

	if(head==true)
	{
		pLine->addHeadLine(this,false);
	}else
	{
		pLine->addTrailLine(this,false);
	}

}


void  RailLine::addHeadLine(RailLine*  pLine,bool head)
{

	if(pLine==NULL)
		return ;
	if(isHeadLine(pLine))
		return ;
	if(m_HeadRailVector.empty())
		pLine->setBreak(false);
	m_HeadRailVector.push_back(pLine);

	if(head==true)
	{
		pLine->addHeadLine(this,true);
	}else
	{
		pLine->addTrailLine(this,true);
	}

	return ;
}

bool RailLine::isTrailLine(const RailLine* pLine)const 
{
	if(pLine==NULL)
		return false;
	RailLineVector::const_iterator it=std::find(m_TrailRailVector.begin(),m_TrailRailVector.end(),pLine);
	if(it==m_TrailRailVector.end())
		return false;
	return true;

}


bool RailLine::isHeadLine(const RailLine* pLine)const 
{
	if(pLine==NULL)
		return false;
	RailLineVector::const_iterator it=std::find(m_HeadRailVector.begin(),m_HeadRailVector.end(),pLine);
	if(it==m_HeadRailVector.end())
		return false;
	return true;

}


void RailLine::turnHeadLine()
{
	if(m_HeadRailVector.empty())
		return ;

	int CurrentOn=0;
	unsigned int size=m_HeadRailVector.size();
	for(unsigned int i=0;i<size;++i)
	{
		if(m_HeadRailVector[i]->isBreak()==false)
		{
			CurrentOn=i;
			break;;
		}

	}
	
	++CurrentOn;

	for(unsigned int i=0;i<size;++i)
	{
	    if(i==CurrentOn)
		{
			m_HeadRailVector[i]->setBreak(false);

		}else
		{
			m_HeadRailVector[i]->setBreak(true);
		}
	}
	
	return ;

}

void RailLine::turnTrailLine()
{
	if(m_TrailRailVector.empty())
		return ;

	int CurrentOn=0;
	unsigned int size=m_TrailRailVector.size();
	for(unsigned int i=0;i<size;++i)
	{
		if(m_TrailRailVector[i]->isBreak()==false)
		{
			CurrentOn=i;
			break;;
		}

	}

	++CurrentOn;

	for(unsigned int i=0;i<size;++i)
	{
		if(i==CurrentOn)
		{
			m_TrailRailVector[i]->setBreak(false);

		}else
		{
			m_TrailRailVector[i]->setBreak(true);
		}
	}

	return ;
}