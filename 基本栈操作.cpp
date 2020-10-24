#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node();
	Node(int d,Node *n);
};
Node::Node()
{	data=0;next=NULL;	}
Node::Node(int d,Node *n)
{	data=d;next=n;	}

class  LinkStack{
public:
	Node *top;
	LinkStack();
	void Push(int d);  //入栈
	void Pop();		   //出栈
	void Top();		   //打印栈顶
	void clear();	   //清空栈
	void length();	   //栈长
	void show();	   //打印栈
	bool Empty();	   //判断栈空
};
bool LinkStack::Empty()
{
	if((top->next)!=NULL)
	{
		return false;
	}
	return true;
}
void LinkStack::show()
{
	Node *p=top;
	while(p->next!=NULL)
	{
		p=p->next;
		cout<<"打印栈:"<<p->data<<endl;
	}
	cout<<"打印完成！"<<endl;
}
void LinkStack::length()
{
	Node *p=top;
	int count=0;
	while(p->next!=NULL)
	{
		count++;
		p=p->next;
	}
	cout<<"栈长："<<count<<endl;
}
void LinkStack::clear()
{
	Node *p=top;
	while(p->next!=NULL)
	{
		cout<<"清空栈："<<p->next->data<<"---";
		Pop();
	}
}
void LinkStack::Top()
{
	if(Empty())
	{
		cout<<"栈空~"<<endl;
		exit(0);
	}
	cout<<"栈顶："<<top->next->data<<endl;
}
void  LinkStack::Pop()
{
	if(Empty())
	{
		cout<<"警告：栈空！"<<endl;
		exit(0);
	}
	cout<<"出栈："<<top->next->data<<endl;
	Node *p=top->next;
	top->next=p->next;
	delete p;
}
void  LinkStack::Push(int d)
{
	Node *newNode = new Node(d,top->next);
	top->next=newNode;
	cout<<"入栈:"<<newNode->data<<endl;
}
LinkStack::LinkStack()
{
	top = new Node();
}

int main()
{
	LinkStack s;
	s.Push(1);
	s.Push(2);
	s.show();
	s.length();
	s.clear();
	s.length();
	s.Push(3);
	cout<<s.Empty()<<endl;
	s.Top();
}
