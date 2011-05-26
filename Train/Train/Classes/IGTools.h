
#ifndef Tools_h_h_h_h_h
#define Tools_h_h_h_h_h

#include "cocos2d.h"


inline cocos2d::CCPoint operator+(const cocos2d::CCPoint& p1,const cocos2d::CCPoint& p2)
{
	return cocos2d::CCPoint(p1.x+p2.x,p1.y+p2.y);
}


inline cocos2d::CCPoint operator-(const cocos2d::CCPoint& p1,const cocos2d::CCPoint& p2)
{
	return cocos2d::CCPoint(p1.x-p2.x,p1.y-p2.y);
}


inline cocos2d::CCPoint operator*(const cocos2d::CCPoint& p1,const cocos2d::CCPoint& p2)
{
	return cocos2d::CCPoint(p1.x*p2.x,p1.y*p2.y);
}


inline cocos2d::CCPoint operator*(const cocos2d::CCPoint& p1,float f)
{
	return cocos2d::CCPoint(p1.x*f,p1.y*f);
}


inline cocos2d::CCPoint operator/(const cocos2d::CCPoint& p1,const cocos2d::CCPoint& p2)
{
	return cocos2d::CCPoint(p1.x/p2.x,p1.y/p2.y);
}

inline cocos2d::CCPoint operator/(const cocos2d::CCPoint& p1,float f)
{
	return cocos2d::CCPoint(p1.x/f,p1.y/f);
}


inline cocos2d::CCPoint NormalPoint(const cocos2d::CCPoint& p1)
{
	float leng=sqrtf(p1.x*p1.x+p1.y*p1.y);
	if(abs(leng)<0.00001f)
	{
        leng=0.0001f;
	}
	return cocos2d::CCPoint(p1.x/leng,p1.y/leng);

}

inline float length(const cocos2d::CCPoint& p1)
{
  float leng=sqrtf(p1.x*p1.x+p1.y*p1.y);
  return leng;
}


//class Tool
//{
//public:
//
//
//
//};














#endif