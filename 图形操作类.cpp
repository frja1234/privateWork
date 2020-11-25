#include<iostream>
using namespace std;
class Shape{
    public:
    	virtual float area() const = 0;
		virtual float volume() const = 0;
        virtual void shapeName() const = 0;
};
class Point:public Shape{
    public:
    Point(float x,float y):x(x),y(y){}
    	virtual void shapeName()const{
            cout<<"point";
        }
    private:
    	float x;
        float y;
};
class Circle:public Point{
    public:
    	Circle(float,float,float);
        virtual float area()const;
        virtual void shapeName()const;
    protected:
    	float radius;
};
Circle::Circle(float x,float y,float r):Point(x,y),radius(r){}
float Circle::area()const{
    return 3.14*radius*radius;
}
void Circle::shapeName()const{
    cout<<"circle";
}
class Cylinder:public Circle{
    public:
    	Cylinder(float,float,float,float);
        virtual float area()const;
        virtual float volume()const;
        virtual void shapeName()const;
    protected:
    	float high;
};
Cylinder::Cylinder(float x,float y,float r,float h):Circle(x,y,r),high(h){}
float Cylinder::area()const{
    return 2*Circle::area()+2*3.14*radius*high;
}
float Cylinder::volume()const{
    return Circle::area()*high;
}
void Cylinder::shapeName()const{
    cout<<"Cylinder";
}
int main(){
    Cylinder c(1,2,3,4);
    c.shapeName();
    cout<<c.area();
}



