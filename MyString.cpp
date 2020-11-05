#include<iostream>
#include<string>
using namespace std;
class MyString{
    private:
    	string str;
    public:
    	MyString(string s):str(s){}
        MyString(){}
		~MyString(){cout<<"该对象已被析构！"<<endl;}
        MyString(const MyString&);
        friend MyString operator+(const MyString s1,const MyString s2);
        friend MyString operator-(const MyString s1,const MyString s2);
        MyString operator=(const MyString s);
        MyString operator+=(const MyString s);
        MyString operator-=(const MyString s);
        bool operator>(const MyString s);
        bool operator<(const MyString s);
        bool operator==(const MyString s);
        MyString operator++();
        MyString operator++(int);
        MyString operator--();
        MyString operator--(int);
        friend ostream& operator<<(ostream &output,const MyString &s);
        friend istream& operator>>(istream &input,const MyString &s);
};
MyString MyString::operator=(const MyString s){
    str=s.str;
    return *this;
}
MyString MyString::operator+=(const MyString s){
    str=str+s.str;
    return *this;
}
MyString MyString::operator-=(const MyString s){
    str=str-s.str;
    return *this;
}
MyString::MyString(const MyString &s){
    str=s.str;
}
MyString operator+(const MyString s1,const MyString s2){
    MyString s;
    s.str=s1.str+s2.str;
    return s;
}
MyString operator-(const MyString s1,const MyString s2){
    MyString s;
    s.str=s1.str-s2.str;
    return s;
}