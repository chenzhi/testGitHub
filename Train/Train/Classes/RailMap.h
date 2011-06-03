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

	/**在地图里加入一个新的线段，线段会自动查找以有线段。通过判断头尾点的位置自动连接
	*/
	RailLine* addRailLine(const std::string& name,const IG::Vector2& headPoint,const IG::Vector2&trailPoint); 


	unsigned int getRailLineCount()const {return m_RailLineVector.size();}


	RailLine*     getRailLineByName(const std::string& name)const ;


	/**设置相连误差范围*/
	void          setConectArea(const cocos2d::CCPoint& area){ m_ConectArea=area;}


	void          destroyAllRailLine();


	/**判断两个点是否在联接的误差范围以内 */
	static bool   isInConectArea(const IG::Vector2& point1,const IG::Vector2& point2);


	/**/
	void          setViewPoint(const cocos2d::CCPoint& point);

protected:


	RailLineVector m_RailLineVector;


	///用来判断线段相连的误差范围
	static cocos2d::CCPoint m_ConectArea;


	cocos2d::CCLayer* m_pLayer;


};












#endif