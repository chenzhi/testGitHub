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


class Train :public cocos2d::CCTargetedTouchDelegate
{

public:

	enum State
	{
		NONE,
		LEFT,
        RIGHT,
	};

public:

	Train(cocos2d::CCLayer* pLayer);

	
	~Train();


	void setPosition(const cocos2d::CCPoint& point);


	 cocos2d::CCPoint getPosition()const;


	void update(float time);

	void setCurrentRailLine(RailLine* pLine);



protected:

	/**µ÷Õû³¯Ïò*/
	void updateOrientate(const IG::Vector2& p0,const IG::Vector2& p2);

	bool containsTouchLocation(cocos2d::CCTouch* touch);
	virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);
	virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);
	virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);



protected:

	cocos2d::CCSprite* m_pSprite;
	RailLine*   m_pCurrentRailLine;
	float      m_LinePercent;

	State      m_State;







};
















#endif