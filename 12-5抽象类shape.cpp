#include<iostream>
using namespace std;
class Shape{
    public:
    	virtual void point()const =0;
		virtual float area()const =0;
        virtual float sum()const =0;
};
class Circle:public Shape{
    public:
    	Circle(float,float,float);
        float getRadius();
        void setRadius();
    	virtual void point();
        virtual float area();
    protected:
    	float x;
        float y;
        float radius;

};
Circle::Circle(float x,float y,float r):x(x),y(y),radius(r){}
void Circle::point(){cout<<"["<<x<<","<<y<<"]";}
void Circle::setRadius(){cin>>radius;}
float Circle::getRadius(){return radius;}
float Circle::area(){return 3.14159*radius*radius; }
