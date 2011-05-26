/**************************************************
 铁路线段。线段一般左边点为首，右边点为尾，上面点为首下面点为尾。
 线段之间可以连接。头首相联。线段具有断开状态和连拉状态。断开状态下
 不能通过车辆
**************************************************/

#ifndef RailLine_h_h_h_h_h
#define RailLine_h_h_h_h_h

#include "IGLine.h"

class RailLine;
typedef std::vector<RailLine*> RailLineVector;


class RailLine  :public cocos2d::CCNode
{

	friend class RailMap;

	
protected:

	public:

	RailLine(const std::string& name,const IG::LineSegment2D& line );

	RailLine(const std::string& name,const IG::Vector2& head ,const IG::Vector2& trail );

	~RailLine();

	void addPoint(const IG::Vector2& point);

	bool  insertPoint(unsigned int index, const IG::Vector2& point);

public:
	const std::string& getName()const    {return m_Name;}


	bool  getHeadPoint(IG::Vector2& p)const;

	bool  getTrailPoint(IG::Vector2& p )const ;


	unsigned int     getHeadLineCount()const {return m_HeadRailVector.size();}

	unsigned int     getTrailLineCount()const {return m_TrailRailVector.size();}


	/**获取尾部连接的线
	*@return 没有找到近回空
	*/
	RailLine*        getOpenTrailLine()const ;

	RailLine*        getOpenHeadLine()const ;

	/**首尾部加入一个联接线段,联接线段的首尾必须与本线段首尾有一个位置相同
	*@param bool head true表示pline的头部加入到当前线段的尾部否
	*/
	void             addTrailLine(RailLine* pLine);

	void             addHeadLine(RailLine*  pLine);


	/**判断是否是与首部相连的线段*/
	bool             isTrailLine(const RailLine* pLine)const ;


	bool             isHeadLine(const RailLine* pLine)const ;



	/**判断是否当前状态是否断开*/
	bool             isBreak()const {return m_Break;}


	/***/
	void             setBreak(bool b) {m_Break=b;}


	/**
	*转换尾头部联接开关状态
	*/
	void             turnHeadLine();
    
	void             turnTrailLine();


	/**获取在这条线段上的点
	*@ percent 0 表示第一个点。1表示最后一个点
	*@ point 返回percent对应的点
	*@ beforePoint 位于percent前一个点
	*@ afertPint 位于percent后一个点
	*@return 成功返回真。失败返回假
	*/
	bool getPercentPoint(float percent,IG::Vector2& point,IG::Vector2&beforPoint,IG::Vector2&afertPoint);


protected:
	/**画线*/
	virtual void draw(void);

	

protected:

	const std::string    m_Name;

	IG::LineSegment2D    m_LineSegment;

	///首部联接的线断
	RailLineVector m_HeadRailVector;

	///尾部的线断
	RailLineVector m_TrailRailVector;



	///表示当前线段是否断开
	bool                  m_Break;

	///中间点所在地图的位置
//	cocos2d::CCPoint    m_Position;
	

};
















#endif