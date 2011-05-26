/***********************************
线段类型
************************************/


#ifndef IGLing_h_h_h_h
#define IGLing_h_h_h_h

#include "IGplatform.h"
#include "IGVector2.h"

namespace IG	
{

	class  LineSegment2D
	{
	public:
		LineSegment2D();

		LineSegment2D(const LineSegment2D& line);

		LineSegment2D(unsigned int count);

		~LineSegment2D();


		/**got counts of points
		*/
		unsigned int getPointCount()const
		{
			return m_PointList.size();
		}


		/**insert point at end
		*/
		void addPoint(const Vector2& point);


		/**insert point before index
		*@reutrn true is successed and false failed
		*/
		bool  insertPoint(unsigned int index, const Vector2& point);


		/**set point new position
		*@return 
		*/
		bool   setPoint(unsigned int index,const Vector2& point);


		/**
		*/
		bool  getPoint(unsigned int index,Vector2& point)const ;


		/** remove point
		*/
		bool   removePoint(unsigned int index);

      	/**
		*@return 
		*/
		bool  getHeadPoint(Vector2& head)const;

		/**
		*/
		bool getTrailPoint(Vector2&trail)const ;


		/**获取在这条线段上的点
		*@ percent 0 表示第一个点。1表示最后一个点
		*@ point 返回percent对应的点
		*@ beforePoint 位于percent前一个点
		*@ afertPint 位于percent后一个点
		*@return 成功返回真。失败返回假
		*/
		bool getPercentPoint(float percent,Vector2& point,Vector2&beforPoint,Vector2&afertPoint);


		/**获取线段的长度*/
		float getLineLength()const {return m_Length;};

		/**sorting pointlist by the y axis
		*@param increase if true sorting by increase false sorting by  decrease
		*/
		void sortByY(bool increase);


		/**@see sortByY
		*/
		void srotByX(bool increase);


		const Vector2Vector& getPointList()const
		{
			return m_PointList;
		}



	protected:

		/**更新长度*/
		void updateLength();


		Vector2Vector m_PointList;

		float         m_Length;



	};


	class sortX
	{
	public:
		sortX(bool increase)
			:m_increase(increase){}


		bool operator()(const Vector2& p1,const Vector2&p2)
		{
			bool tem=p1.x<p2.x;
			return m_increase?tem:!tem;
		}


	protected:
		bool m_increase;

	};

	class sortY
	{
	public:
		sortY(bool increase)
			:m_increase(increase){}


		bool operator()(const Vector2& p1,const Vector2&p2)
		{
			bool tem=p1.y<p2.y;
			return m_increase?tem:!tem;
		}

	protected:
		bool m_increase;

	};






}

















#endif