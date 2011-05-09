/**************************************************
 ��·�߶Ρ��߶�һ����ߵ�Ϊ�ף��ұߵ�Ϊβ�������Ϊ�������Ϊβ��
 �߶�֮��������ӡ�ͷ���������߶ξ��жϿ�״̬������״̬���Ͽ�״̬��
 ����ͨ������
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


	/**��β������һ�������߶�,�����߶ε���β�����뱾�߶���β��һ��λ����ͬ
	*@param bool head true��ʾpline��ͷ�����뵽��ǰ�߶ε�β����
	*/
	void             addTrailLine(RailLine* pLine, bool head);

	void             addHeadLine(RailLine*  pLine,bool head);


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


	

protected:

	const std::string    m_Name;

	
	///�߶������յ�,
	cocos2d::CCPoint      m_HeadPoint;
	cocos2d::CCPoint      m_TrailPoint;


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