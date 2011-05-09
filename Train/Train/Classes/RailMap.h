#ifndef Railmap_h_h_h_h_h
#define Railmap_h_h_h_h_h
#include "Singleton.h"

#include "RailLine.h"




class RailMap :public Singleton<RailMap>
{
public:

	RailMap();

	~RailMap();

	/**在地图里加入一个新的线段，线段会自动查找以有线段。通过判断头尾点的位置自动连接
	*/
	bool addRailLine(const std::string& name,const cocos2d::CCPoint& headPoint,const cocos2d::CCPoint&trailPoint); 


	unsigned int getRailLineCount()const {return m_RailLineVector.size();}


	RailLine*     getRailLineByName(const std::string& name)const ;


	/**设置相连误差范围*/
	void          setConectArea(const cocos2d::CCPoint& area){ m_ConectArea=area;}


	void          destroyAllRailLine();


	/**判断两个点是否在联接的误差范围以内 */
	static bool   isInConectArea(const  cocos2d::CCPoint& point1,const cocos2d::CCPoint& point2);


protected:


	RailLineVector m_RailLineVector;


	///用来判断线段相连的误差范围
	static cocos2d::CCPoint m_ConectArea;

};












#endif