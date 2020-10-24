#include<iostream>
#include<cmath>
using namespace std;
void move(char x, char y){
    cout<<x<<"-->"<<y<<endl;
}
void Hanoi(int i,char A,char B,char C){
    if(i==1)move(A,C);
    else{
        Hanoi(i-1,A,C,B);
        move(A,C);
        Hanoi(i-1,B,C,A);
    }
}
int main(){
	char A='1',B='2',C='3';
    int n=10;
    Hanoi(n,A,B,C);

}