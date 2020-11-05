#include<iostream>
#include<istream>
#include<fstream>
using namespace std;
struct Student{
    char name[20];
    int num;
    int age;
    char sex;
};
void outputBinary(){
    Student stud[3]={"li",1008,18,'f',"fang",1002,19,'f',"wang",1004,17,'f'};
	ofstream outfile("stud.text",ios::binary);
    if(!outfile) {
        cerr<<"打开失败"<<endl;
    	abort();
    }
    for(int i=0;i<3;i++){
        outfile.write((char *)&stud[i],sizeof(stud[i]));
    }
    outfile.close();
}
void inputBinary(){
	Student stud[3];
    ifstream infile("stud.text",ios::binary);
     if(!infile) {
        cerr<<"打开失败"<<endl;
    	abort();
    }
    for(int i=0;i<3;i++){
		infile.read((char *)&stud[i],sizeof(stud[i]));
    }
    for(int i=0;i<3;i++){
        cout<<stud[i].name<<endl;
        cout<<stud[i].num<<endl;
        cout<<stud[i].age<<endl;
        cout<<stud[i].sex<<endl;
    }
}
char in[10],out[10];
void output(){
    ofstream outfile("f1.text",ios::out);//iOS::app:打开文件，数据写在末尾，
    //ios::ate:打开文件，指针指向末尾
    //iOS::binary,ios::nocreate

    if(!outfile){//outfile返回0为打开失败，否则为空
		cerr<<"打开失败！"<<endl;
        exit(1);
    }
	for(int i=0;i<10;i++){
        cin>>out[i];
        outfile<<out[i]<<" ";
    }
    outfile.close();
}
void input(){
    ifstream infile("f1.text",ios::in);
    if(!infile){
		cerr<<"打开失败！";
        exit(1);
    }
    //char c[20];
    //cin.getline(c,20);
    for(int i=0;i<20;i++){
        infile>>in[i];
        cout<<in[i]<<" ";
    }
    infile.close();
}
int main(){
    //output();
    //input();
    outputBinary();
    inputBinary();
}