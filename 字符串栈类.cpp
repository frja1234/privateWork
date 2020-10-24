#include<iostream>
using namespace std;
const int SIZE=17;
class Stack{
private:
	char stck[SIZE];
	int tos;
public:
	Stack():tos(0){}
	void Push(char ch);//入栈
	char Pop();		   //出栈
	int Length();      //栈长
	void show();	   //打印栈
	bool Empty();		//判断栈空
};
bool Stack::Empty()
{
	if(tos==0)
		return true;
	return false;
}
void Stack::show()
{
	int i=0;
	while(i<tos)
	{
		cout<<stck[i]<<" ";
		i++;
	}
	cout<<endl;
}
int Stack::Length()
{
	return tos;
}
void Stack::Push(char ch)
{
	if(tos==SIZE)
		cout<<"栈满了！"<<endl;
	else{
		stck[tos]=ch;tos++;
	}
}
char Stack::Pop(){
	if(Empty())
	{
		cout<<"栈空~"<<endl;
		return 0;
	}
	return stck[--tos];
}
int main()
{
	Stack s;
	s.Push('a');
	s.Push('b');
	s.show();
	s.Pop();
	s.Pop();
	s.Pop();
}