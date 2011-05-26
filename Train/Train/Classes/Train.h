#ifndef train_h_h_h_h_
#define train_h_h_h_h_

namespace IG
{
	 class Vector2;

}

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
	void updateOrientate(const IG::Vector2& p0,const IG::Vector2& p2);



protected:

	cocos2d::CCSprite* m_pSprite;

	RailLine*   m_pCurrentRailLine;

	float      m_LinePercent;





};
















#endif