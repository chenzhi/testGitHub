#ifndef Railmap_h_h_h_h_h
#define Railmap_h_h_h_h_h
#include "Singleton.h"

#include "RailLine.h"




class RailMap :public Singleton<RailMap>
{
public:

	RailMap();

	~RailMap();

	/**�ڵ�ͼ�����һ���µ��߶Σ��߶λ��Զ����������߶Ρ�ͨ���ж�ͷβ���λ���Զ�����
	*/
	bool addRailLine(const std::string& name,const cocos2d::CCPoint& headPoint,const cocos2d::CCPoint&trailPoint); 


	unsigned int getRailLineCount()const {return m_RailLineVector.size();}


	RailLine*     getRailLineByName(const std::string& name)const ;


	/**����������Χ*/
	void          setConectArea(const cocos2d::CCPoint& area){ m_ConectArea=area;}


	void          destroyAllRailLine();


	/**�ж��������Ƿ������ӵ���Χ���� */
	static bool   isInConectArea(const  cocos2d::CCPoint& point1,const cocos2d::CCPoint& point2);


protected:


	RailLineVector m_RailLineVector;


	///�����ж��߶���������Χ
	static cocos2d::CCPoint m_ConectArea;

};












#endif