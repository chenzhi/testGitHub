#include "IGLine.h"


namespace IG
{

	//------------------------------------------------------------------------------
	LineSegment2D::LineSegment2D()
	{

	}

	//------------------------------------------------------------------------------
	LineSegment2D::LineSegment2D(const LineSegment2D& line)
	{
		unsigned int size=line.getPointCount();
		Vector2 v;
		for(int i=0;i<size;++i)
		{
			line.getPoint(i,v);
			m_PointList.push_back(v);
		}
		updateLength();
		return ;

	}

	//------------------------------------------------------------------------------
	LineSegment2D::LineSegment2D(unsigned int count)
	{
		m_PointList.reserve(count);

	}

	//------------------------------------------------------------------------------
	LineSegment2D::~LineSegment2D()
	{

	}

	//---------------------------------------------------------------------------------
	void LineSegment2D::addPoint(const Vector2& point)
	{
		m_PointList.push_back(point);
		updateLength();

	}

	//---------------------------------------------------------------------------------
	bool  LineSegment2D::insertPoint(unsigned int index, const Vector2& point)
	{
		if(index>=this->getPointCount())
			return false;

		Vector2Vector::iterator beginIt=m_PointList.begin();
		beginIt+=index;
		m_PointList.insert(beginIt,point);
		updateLength();
		return true;
	}

	//---------------------------------------------------------------------------------
	bool   LineSegment2D::setPoint(unsigned int index,const Vector2& point)
	{
		if(index>=getPointCount())
			return false;
		m_PointList[index]=point;
		updateLength();
		return true;
	}

	bool LineSegment2D::getPoint(unsigned int index,Vector2& point) const 
	{
		if(index>=getPointCount())
			return false;
		point=m_PointList[index];
		return true;
	}

	//---------------------------------------------------------------------------------
	bool    LineSegment2D::removePoint(unsigned int index)
	{
		if(index>=getPointCount())
			return false;

		Vector2Vector::iterator beginIt=m_PointList.begin();
		beginIt+=index;
		m_PointList.erase(beginIt);
		updateLength();
		return true;
	}
	
	void  LineSegment2D::sortByY(bool increase)
	{
		std::sort(m_PointList.begin(),m_PointList.end(),sortX(increase));
		updateLength();
	}

	//----------------------------------------------------------------------------------------
	void LineSegment2D::srotByX(bool increase)
	{
      std::sort(m_PointList.begin(),m_PointList.end(),sortY(increase));
	  updateLength();
	}

	//------------------------------------------------------------------------------------------
	bool  LineSegment2D::getHeadPoint(Vector2& head)const
	{
		if(m_PointList.empty())
			return false;
		head=m_PointList[0];
		return true;
	}

	//--------------------------------------------------------------------------------------
	bool LineSegment2D::getTrailPoint(Vector2&trail)const 
	{
          unsigned int size=m_PointList.size();
		  if(size==0)
			  return false;
		  trail=m_PointList[size-1];
          return true;
	}

	/**更新长度*/
	void  LineSegment2D::updateLength()
	{
		unsigned int size=m_PointList.size();
		if(size==0)
	    {
			m_Length=0.0f;
			return ;
		}

        m_Length=0.0f;
		for(int i=0;i<size-1;++i)
		{
			Vector2 p1=m_PointList[i];
			Vector2 p2=m_PointList[i+1];
			m_Length+=p1.distance(p2);
		}
		return ;

	}

	bool LineSegment2D::getPercentPoint(float percent,Vector2& point,Vector2&beforPoint,Vector2&afertPoint)
	{
	
		int pointsize=m_PointList.size();
		if(pointsize<=1.0f)
		{
			return false;
		}
		percent=std::min(percent,1.0f);
		percent=std::max(percent,0.0f);
		float percentLength=m_Length*percent;

		

		float realLength=0.0f;
		for(int i=0;i<pointsize-1;++i)
		{
			Vector2 p1=m_PointList[i];
			Vector2 p2=m_PointList[i+1];
			float dis=p1.distance(p2);

			if(percentLength>=realLength&&percentLength<=realLength+dis)
			{
				float temdis=percentLength-realLength;
				IG::Vector2 tem=(p2-p1);
				tem.normalise();
				point=p1+(tem*temdis);
				beforPoint=p1;
				afertPoint=p2;
				return true;

			}

			realLength+=dis;
		}


		return true;

	}

}
