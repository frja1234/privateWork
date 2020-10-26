#include<iostream>
using namespace std;
class DataType{
	private:
    	int i;
        char c;
        float f;
    public:
    	DataType(int i):i(i){}
        DataType(char c):c(c){}
        DataType(float f):f(f){}
        void display();
};