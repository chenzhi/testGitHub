/**************************************************
 ��·�߶Ρ��߶�һ����ߵ�Ϊ�ף��ұߵ�Ϊβ�������Ϊ�������Ϊβ��
 �߶�֮��������ӡ�ͷ���������߶ξ��жϿ�״̬������״̬���Ͽ�״̬��
 ����ͨ������
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


	/**��ȡβ�����ӵ���
	*@return û���ҵ����ؿ�
	*/
	RailLine*        getOpenTrailLine()const ;

	RailLine*        getOpenHeadLine()const ;

	/**��β������һ�������߶�,�����߶ε���β�����뱾�߶���β��һ��λ����ͬ
	*@param bool head true��ʾpline��ͷ�����뵽��ǰ�߶ε�β����
	*/
	void             addTrailLine(RailLine* pLine);

	void             addHeadLine(RailLine*  pLine);


	/**�ж��Ƿ������ײ��������߶�*/
	bool             isTrailLine(const RailLine* pLine)const ;


	bool             isHeadLine(const RailLine* pLine)const ;



	/**�ж��Ƿ�ǰ״̬�Ƿ�Ͽ�*/
	bool             isBreak()const {return m_Break;}


	/***/
	void             setBreak(bool b) {m_Break=b;}


	/**
	*ת��βͷ�����ӿ���״̬
	*/
	void             turnHeadLine();
    
	void             turnTrailLine();


	/**��ȡ�������߶��ϵĵ�
	*@ percent 0 ��ʾ��һ���㡣1��ʾ���һ����
	*@ point ����percent��Ӧ�ĵ�
	*@ beforePoint λ��percentǰһ����
	*@ afertPint λ��percent��һ����
	*@return �ɹ������档ʧ�ܷ��ؼ�
	*/
	bool getPercentPoint(float percent,IG::Vector2& point,IG::Vector2&beforPoint,IG::Vector2&afertPoint);


protected:
	/**����*/
	virtual void draw(void);

	

protected:

	const std::string    m_Name;

	IG::LineSegment2D    m_LineSegment;

	///�ײ����ӵ��߶�
	RailLineVector m_HeadRailVector;

	///β�����߶�
	RailLineVector m_TrailRailVector;



	///��ʾ��ǰ�߶��Ƿ�Ͽ�
	bool                  m_Break;

	///�м�����ڵ�ͼ��λ��
//	cocos2d::CCPoint    m_Position;
	

};
















#endif