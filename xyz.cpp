#include<iostream>
using namespace std;
class X;
class Y{
    public:
    	void g(X*);

};
class Z{
	public:
		void f(X*);
};
class X{
	private:
    	int i;
    public:
    	friend void Y::g(X*);
		friend Z;
		friend void h(X*);
		X(int i):i(i){}
		void display();
};
void X::display(){
	cout<<i<<endl;
}
void h(X *x){
	x->i=x->i+10;
}
void Z::f(X *x){
	x->i=x->i+5;
}
void Y::g(X *x){
	x->i=x->i+1;
}
int main(){
	X x(0);
	Y y;
	Z z;
	z.f(&x);
	x.display();
	y.g(&x);
	x.display();
	h(&x);
	x.display();
}
