#ifndef train_h_h_h_h_
#define train_h_h_h_h_



enum MoveDir
{

};


class RailLine;
class Train
{
public:

	Train(cocos2d::CCLayer* pLayer);

	
	~Train();


	void setPosition(const cocos2d::CCPoint& point);


	void update(float time);

	void setCurrentRailLine(RailLine* pLine);



protected:

	/**µ÷Õû³¯Ïò*/
	void updateOrientate();



protected:

	cocos2d::CCSprite* m_pSprite;

	RailLine*   m_pCurrentRailLine;

	float      m_LinePercent;





};
















#endif