#include<iostream>
using namespace std;
class Time{
    public:
    	Time(int,int,int);
        Time();
        ~Time(){cout<<"该对象已被析构！"<<endl;}
        Time(int a){hour=a;minute=0;second=0;}
        Time operator+=(Time &);
        Time operator-=(Time &);
        Time operator++();
        Time operator++(int);
        Time operator--();
        Time operator--(int);
        Time operator()(int h,int m,int s);
        friend bool operator>(Time &,Time &);
        friend bool operator<(Time &,Time &);
        friend bool operator==(Time &,Time &);
        friend ostream& operator<<(ostream &output,const Time &t);
        void display();
    private:
    	int hour;
        int minute;
        int second;
};
Time Time::operator()(int h,int m,int s){
    hour=hour+h;
    minute=minute+m;
    second=second+s;
    return *this;
}
ostream& operator<<(ostream &output,const Time &t){
    output<<t.hour<<"-"<<t.minute<<"-"<<t.second<<endl;
}
Time::Time(int h,int m,int s):hour(h),minute(m),second(s){}
Time::Time():hour(0),minute(0),second(0){}
void Time::display(){
    cout<<hour<<"-"<<minute<<"-"<<second<<endl;
}
Time Time::operator+=(Time &t1){
    if((second+=t1.second)>60){
        second-=60;
        ++minute;
    }
    if((minute+=t1.minute)>60){
        minute-=60;
        ++hour;
    }
    if((hour+=t1.hour)>24){
        hour=hour+t1.hour-24;
    }
    return *this;
}
Time Time::operator-=(Time &t1){
    if(second-=t1.minute<0){
        second+=60;
        --minute;
    }
    if((minute-=t1.minute)<0){
        minute+=60;
        --hour;
    }
    if((hour-=t1.hour)<0){
        hour=0;
        minute=0;
        second=0;
    }
    return *this;
}
Time Time::operator++(){
    if(++second>60){
        second-=60;
        ++minute;
    }
    if(minute>60){
        minute-=60;
        ++hour;
    }
    if(hour>24)hour-=24;
    return *this;
}
Time Time::operator++(int){
    Time temp= *this;
    if(++second>60){
        second-=60;
        ++minute;
    }
    if(minute>60){
        minute-=60;
        ++hour;
    }
    if(hour>24)hour-=24;
    return temp;
}
Time Time::operator--(){
	if(--second<0){
        second+=60;
        --minute;
    }
    if(minute<0){
        minute+=60;
        --hour;
    }
    if(hour<0){
        hour=0;
        minute=0;
        second=0;
    }
    return *this;
}
Time Time::operator--(int){
    Time temp=*this;
    if(--second<0){
        second+=60;
        --minute;
    }
    if(minute<0){
        minute+=60;
        --hour;
    }
    if(hour<0){
        hour=0;
        minute=0;
        second=0;
    }
    return temp;
}
bool operator>(Time &t1,Time &t2){
    if(t1.hour>t2.hour)return true;
    else if(t1.hour==t2.hour){
        if(t1.minute>t2.minute)return true;
        else if(t1.minute==t2.minute){
            if(t1.second>t2.second)return true;
            else return false;
        }else return false;
    }else return false;
}
bool operator<(Time &t1,Time &t2){
    if(t1.hour<t2.hour)return true;
    else if(t1.hour==t2.hour){
        if(t1.minute<t2.minute)return true;
        else if(t1.minute==t2.minute){
            if(t1.second<t2.second)return true;
            else return false;
        }else return false;
    }else return false;
}
bool operator==(Time &t1,Time &t2){
    if(t1.hour==t2.hour&&t1.minute==t2.minute&&t1.second==t2.second)return true;
    else return false;
}
int main(){
    Time t1(2,34,5),t2(3,45,53),t;

    //t1+=t2;
    //t1-=t2;
    //++t1;
    //t1++;
    //--t1;
    t=t1(1,2,3);
    t.display();
    //if(t1>t2)cout<<"t1>t2"<<endl;
    //if(t1<t2)cout<<"t1<t2"<<endl;
}