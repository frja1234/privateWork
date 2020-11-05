#include<iostream>
using namespace std;
struct worker{
	int num;
    int age;
    int sex;
    worker *next;
};
worker *creat(){
    int n;
    worker *head,*p,*r;
    head = new worker;
    head->next=NULL;
    cout<<"请输入要创建的个数:"<<endl;
	cin>>n;
    cout<<"请输入第1个的值："<<endl;
    cout<<"num:";
    cin>>head->num;
    cout<<"age:";
    cin>>head->age;
    cout<<"sex:";
    cin>>head->sex;
    p=r=head;
    for(int i=0;i<n-1;i++){
        p = new worker;
        p->next=NULL;
        cout<<"请输入第"<<i+2<<"个的值"<<endl;
        cout << "num:";
        cin >> p->num;
        cout << "age:";
        cin >> p->age;
        cout << "sex:";
        cin >> p->sex;
        r->next=p;
        r=r->next;
    }
    return head;
}
void insert(worker *head){
    worker *p,*r;
    r=head;
    while(r->next!=NULL)r=r->next;
    p = new worker;
    p->next=NULL;
    cout << "请输入该员工的信息" << endl;
    cout << "num:";
    cin >> p->num;
    cout << "age:";
    cin >> p->age;
    cout << "sex:";
    cin >> p->sex;
    r->next=p;
}
void insertNode(worker *head,worker *key){
    worker *p,*r;
    r=head;
    while(r->next!=NULL)r=r->next;
    p = key;
    p->next=NULL;
    r->next=p;
}
worker *deleteByNum(worker *head,int key){
    worker *p,*r;
    r=head;
    while(r->next!=NULL){
        if(r->next->num==key){
            p=r->next;
            if(p->next!=NULL)
            {
				r->next=p->next;
            }else{
				r->next=NULL;
            }
            delete(p);
            cout<<"删除成功"<<endl;
            return r;
        }
        r=r->next;
    }
    cout<<"没有该员工信息"<<endl;
    return head;
}
worker* deleteByAge(worker *head){
		worker *p,*r,*d;
        d=new worker;
        d->next=NULL;
        while(r->next!=NULL){
            if((r->next->age>60&&r->next==0)||(r->next->age>60&&r->next==0)){
				p=r->next;
				if(p->next!=NULL)
				{
					r->next=p->next;
				}else{
					r->next=NULL;
				}
                d->next=p;
				cout<<"删除"<<p->num<<"成功"<<endl;
                delete(p);
                d=d->next;
            }
            r=r->next;
        }
        return d;
}
void display(worker *head){
    while(head!=NULL){
		cout<<"编号："<<head->num<<"年龄："<<head->age<<"性别："<<head->sex<<endl;
        head=head->next;
    }
}
void sexNum(worker *head){
    int x=0,y=0;
    while(head!=NULL){
		if(head->sex==0){
            x++;
 		}else{y++;}
        head=head->next;
    }
   cout<<"男性数量："<<x<<"女性数量："<<y<<endl;
}
int main(){
    worker *head,*p;
    head=creat();
    display(head);
    insert(head);
    display(head);
    deleteByNum(head,3);
    display(head);
    p=deleteByAge(head);
    display(p);
    sexNum(head);
    display(head);
}