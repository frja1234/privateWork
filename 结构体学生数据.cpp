#include<iostream>
#include<string>
using namespace std;
struct student{
	int num;
    string name;
    int score[3];
    int avg;
};
int main(){
    
    void print(student s[]);
    student s[5];
    int avg=0;
    for(int i=0;i<5;i++){
        cout<<"请输入第"<<i+1<<"个学生的信息"<<endl;
        cin>>s[i].num>>s[i].name;
        cout<<"语文:"<<endl;
        cin>>s[i].score[0];
        cout<<"数学:"<<endl;
        cin>>s[i].score[1];
        cout<<"英语:"<<endl;
        cin>>s[i].score[2]<<endlq;
        for(int j=0;j<3;j++){
			avg=avg+s[i].score[j];
        }
        s[i].avg=avg/3;
    }
    print(s);
}
void print(student s[]){
	for(int i=0;i<5;i++){
        cout<<"编号："<<s[i].num<<" 名字："<<s[i].name<<endl;
        cout<<"语文："<<s[i].score[0];
        cout<<" 数学："<<s[i].score[1];
        cout<<" 英语："<<s[i].score[2];
        cout<<" 平均分："<<s[i].avg;
    }
}