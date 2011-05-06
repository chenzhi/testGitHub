/**************************************************
 铁路线段。线段一般左边点为首，右边点为尾，上面点为首下面点为尾。
 线段之间可以连接。头首相联。线段具有断开状态和连拉状态。断开状态下
 不能通过车辆
**************************************************/

#ifndef RailLine_h_h_h_h_h
#define RailLine_h_h_h_h_h


class RailLine;
typedef std::vector<RailLine*> RailLineVector;

class RailLine
{

	friend class RailMap;

	
protected:

	RailLine(const std::string& name,const cocos2d::CCPoint&head ,const cocos2d::CCPoint& trail );

	~RailLine();
public:
	const std::string& getName()const    {return m_Name;}


	cocos2d::CCPoint getHeadPoint()const {return m_HeadPoint;}

	cocos2d::CCPoint getTrailPoint()const {return m_TrailPoint;}


	unsigned int     getHeadLineCount()const {return m_HeadRailVector.size();}

	unsigned int     getTrailLineCount()const {return m_TrailRailVector.size();}


	/**首尾部加入一个联接线段,联接线段的首尾必须与本线段首尾有一个位置相同
	*@param bool head true表示pline的头部加入到当前线段的尾部否
	*/
	void             addTrailLine(RailLine* pLine, bool head);

	void             addHeadLine(RailLine*  pLine,bool head);


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


	

protected:

	const std::string    m_Name;

	
	///线段起点和终点,
	cocos2d::CCPoint      m_HeadPoint;
	cocos2d::CCPoint      m_TrailPoint;


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