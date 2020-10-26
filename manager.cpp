#include<iostream>
using namespace std;
class Time{
    protected:
    	int year;
        int month;
        int day;
    public:
    	Time(int y,int m,int d):year(y),month(m),day(d){}
        Time();
        void setTime(int,int,int);
		void display(){cout<<year<<"-"<<month<<"-"<<day<<endl;}
};
Time::Time(){
    year=0;
    month=0;
    day=0;
}
void Time::setTime(int y,int m,int d){
    year=y;
    month=m;
    day=d;
}
class People{
    protected:
    	int number;
        int sex;
        Time birthday;
        int id;
        int year;
        int month;
        int day;
	public:
		People(int n,int s,int i,int y,int m,int d);
		~People(){cout<<"该对象已被析构"<<endl;}
        People(const People &);
        inline void display();
        void setPeople(int n,int i,int s=0,int y=0,int m=0,int d=0);
};
People::People(int n,int s,int i,int y,int m,int d):birthday(y,m,d),number(n),sex(s),id(i){}
People::People(const People &p){
    number=p.number;
    sex=p.sex;
    id=p.id;
    year=p.year;
    month=p.month;
    day=p.day;
}
inline void People::display(){
    cout<<"number:"<<number<<endl;
	if(sex==0){
        cout<<"sex:x"<<endl;
    }else{
        cout<<"sex:y"<<endl;
    }
    cout<<"id:"<<id<<endl;
    birthday.display();
}
void People::setPeople(int n,int i,int s,int y,int m,int d){
    number=n;
    id=i;
    sex=s;
    birthday.setTime(y,m,d);
}
int main(){
    People p(1,1,2017101887,1998,10,06);
    p.display();

}