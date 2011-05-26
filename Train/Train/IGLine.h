/***********************************
�߶�����
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


		/**��ȡ�������߶��ϵĵ�
		*@ percent 0 ��ʾ��һ���㡣1��ʾ���һ����
		*@ point ����percent��Ӧ�ĵ�
		*@ beforePoint λ��percentǰһ����
		*@ afertPint λ��percent��һ����
		*@return �ɹ������档ʧ�ܷ��ؼ�
		*/
		bool getPercentPoint(float percent,Vector2& point,Vector2&beforPoint,Vector2&afertPoint);


		/**��ȡ�߶εĳ���*/
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

		/**���³���*/
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