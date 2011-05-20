#ifndef poly_h_h_h_h_h_h
#define poly_h_h_h_h_h_h


#include "object.h"
#include <vector>
#include <QPointF>
#include <Qrect.h>

namespace Tiled 
{

	class TILEDSHARED_EXPORT Poly :public Object
	{

	   public:

		   Poly(const std::string& name );

		   ~Poly();


		   void addPoint(const QPointF & point);


		   void clear();


		   unsigned int getPointCount()const {return m_PointVector.size();}

		   const QPointF& getPointByIndex(unsigned int index)const  {return m_PointVector[index];}

		   QRectF boundingRect()const ;

		   bool         setPointPos(unsigned int index,const QPointF& point);


	protected:
		
		std::string   m_Name;

		typedef std::vector<QPointF> PointVector;
		PointVector m_PointVector;


	};








};















#endif