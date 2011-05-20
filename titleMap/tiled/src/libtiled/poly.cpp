#include "poly.h"


namespace Tiled 
{

Poly::Poly(const std::string& name )
:m_Name(name)
{

}

Poly::~Poly()
{

}


void Poly::addPoint(const QPointF & point)
{
	m_PointVector.push_back(point);

}


void Poly::clear()
{
	m_PointVector.clear();

}


QRectF  Poly::boundingRect()const 
{
	if(m_PointVector.size()<2)
		return QRectF();

	float  minx=9999,miny=99999,maxx=0,maxy=0;
	foreach(QPointF point,m_PointVector)
	{
		minx=std::min((float)point.x(),minx);
		miny=std::min((float)point.y(),miny);

		maxx=std::max((float)point.x(),maxx);
		maxy=std::max((float)point.y(),maxy);

	}


	return QRectF(minx,miny,maxx-minx,maxy-miny).normalized();


}

bool  Poly::setPointPos(unsigned int index,const QPointF& point)
{
	if(index>=m_PointVector.size())
		return false;
	m_PointVector[index]=point;
	return true;

}


};