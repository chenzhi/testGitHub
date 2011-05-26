#include "pch.h"
#include "RailLine.h"
#include "IGTools.h"


RailLine::RailLine(const std::string& name, const IG::Vector2& head,const IG::Vector2 & trail)
:m_Name(name)
{
	m_LineSegment.addPoint(head);
	m_LineSegment.addPoint(trail);

}

RailLine::RailLine(const std::string& name,const IG::LineSegment2D& line )
:m_Name(name),m_LineSegment(line)
{


}


RailLine::~RailLine()
{
	

}

void RailLine::addPoint(const IG::Vector2& point)
{
	m_LineSegment.addPoint(point);
}

bool  RailLine::insertPoint(unsigned int index, const IG::Vector2& point)
{
	return m_LineSegment.insertPoint(index,point);

}

bool  RailLine::getHeadPoint(IG::Vector2& p )const
{
	return m_LineSegment.getHeadPoint(p);
}

bool  RailLine::getTrailPoint(IG::Vector2& p )const
{
	return m_LineSegment.getTrailPoint(p);

}

RailLine* RailLine::getOpenTrailLine()const 
{
	if(m_TrailRailVector.empty())
		return NULL;
	unsigned int size=m_TrailRailVector.size();
	for(unsigned int i=0;i<size;++i)
	{
		RailLine* pLine=m_TrailRailVector[i];
		if(pLine->isBreak()==false)
			return pLine;
	}
	return NULL;

}


RailLine*   RailLine::getOpenHeadLine()const
{
	if(m_HeadRailVector.empty())
		return NULL;
	unsigned int size=m_HeadRailVector.size();
	for(unsigned int i=0;i<size;++i)
	{
		RailLine* pLine=m_HeadRailVector[i];
		if(pLine->isBreak()==false)
			return pLine;
	}
	return NULL;

}


void  RailLine::addTrailLine(RailLine* pLine)
{
	if(pLine==NULL)
		return ;
	if(isTrailLine(pLine))
		return ;
	
	///默认第一个连接的线路是开通的
	if(m_TrailRailVector.empty())
		pLine->setBreak(false);

	m_TrailRailVector.push_back(pLine);

	pLine->addHeadLine(this);
	

}


void  RailLine::addHeadLine(RailLine*  pLine)
{

	if(pLine==NULL)
		return ;
	if(isHeadLine(pLine))
		return ;
	if(m_HeadRailVector.empty())
		pLine->setBreak(false);
	m_HeadRailVector.push_back(pLine);


	pLine->addTrailLine(this);
	

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




void RailLine::draw(void)
{

	if(isBreak())
		return ;
	int PointCount=m_LineSegment.getPointCount();
	if(PointCount==0)
		return ;
	

	glDisable(GL_TEXTURE_2D);
	glDisableClientState(GL_TEXTURE_COORD_ARRAY);
	//glDisableClientState(GL_COLOR_ARRAY);

	glColor4f(0.0f,1.1f,0.0f,1.0f);
	glVertexPointer(2, GL_FLOAT, 0,&(m_LineSegment.getPointList()[0]));	
	glDrawArrays(GL_LINE_STRIP, 0,PointCount);

	//glEnableClientState(GL_COLOR_ARRAY);
	glEnableClientState(GL_TEXTURE_COORD_ARRAY);
	glEnable(GL_TEXTURE_2D);

	return ;

}

bool RailLine::getPercentPoint(float percent,IG::Vector2& point,IG::Vector2&beforPoint,IG::Vector2&afertPoint)
{
	return m_LineSegment.getPercentPoint(percent,point,beforPoint,afertPoint);
}