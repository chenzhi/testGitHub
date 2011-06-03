#ifndef Railmap_h_h_h_h_h
#define Railmap_h_h_h_h_h
#include "IGSingleton.h"

#include "RailLine.h"




class RailMap :public Singleton<RailMap>
{
public:

	RailMap(cocos2d::CCLayer* pLayer);

	~RailMap();


	RailLine* addRailLine(const std::string& name,const IG::LineSegment2D& line);

	/**�ڵ�ͼ�����һ���µ��߶Σ��߶λ��Զ����������߶Ρ�ͨ���ж�ͷβ���λ���Զ�����
	*/
	RailLine* addRailLine(const std::string& name,const IG::Vector2& headPoint,const IG::Vector2&trailPoint); 


	unsigned int getRailLineCount()const {return m_RailLineVector.size();}


	RailLine*     getRailLineByName(const std::string& name)const ;


	/**����������Χ*/
	void          setConectArea(const cocos2d::CCPoint& area){ m_ConectArea=area;}


	void          destroyAllRailLine();


	/**�ж��������Ƿ������ӵ���Χ���� */
	static bool   isInConectArea(const IG::Vector2& point1,const IG::Vector2& point2);


	/**/
	void          setViewPoint(const cocos2d::CCPoint& point);

protected:


	RailLineVector m_RailLineVector;


	///�����ж��߶���������Χ
	static cocos2d::CCPoint m_ConectArea;


	cocos2d::CCLayer* m_pLayer;


};












#endif