#include<iostream>
using namespace std;
struct node{
    int num;
    struct node *next;
};

node *create(){
    int m;
    node *p,*r,*head;
    head = new node;
    head->next=NULL;
    cout<<"输入创建个数：";
    cin>>m;
    p=r=head;
    cout<<"请输入第1个数据：";
    cin>>head->num;
    for(int i=1;i<m;i++){
		p=new node;
        p->next=NULL;
        cout<<"请输入第"<<i+1<<"个数据：";
        cin>>p->num;
        r->next=p;
        r=r->next;
    }
    if(head!=NULL){
        cout<<"创建成功！"<<endl;
    }
    return head;
}
node *del(node *head,int key){
    node *p,*r;
	if(head==NULL){
		cout<<"该链表是空的！"<<endl;
        return head;
    }
    p=head;
    while(p->next!=NULL){
        if(p->next->num==key){
            r=p->next;
			p->next=r->next;
            delete(r);
            cout<<"节点删除成功！"<<endl;
            return head;
        }
        p=p->next;
    }
    cout<<"不存在该节点！"<<endl;
    return head;

}
node *insert(node *head,int key){
    node *p,*r;
    p=head;
    r= new node;
    r->next=NULL;
    r->num=key;
    while(p->next!=NULL){
		if(p->next->num>key){
			break;
		}
        p=p->next;
    }
    if(p->next==NULL){
        p->next=r;
    }else{
		r->next=p->next;
        p->next=r;
    }
    cout<<"插入成功!"<<endl;
    return head;
}
void print(node *head){
    node *p;
    p=head;
    while(p){
        cout<<p->num<<"  ";
        p=p->next;
    }
}
node *reverse(node *head)
{
	node *p,*r,*t=head;
	if(head->next==NULL)
		return head;
	p=head;
	r=p->next;
	p->next=NULL;
	int i=0;
	while(r)
	{
		i++;
		p=r;
		r=r->next;
		if(i==1)
		{
			p->next=NULL;
		}
		else
		{	p->next=head;}
		head=p;
	}
	head=t;
	head->next=p;
	p=head;
	return head;
}
int main(){
    node *head=create();
    print(head);
    head=insert(head,6);
    print(head);
    head=del(head,4);
    print(head);
}