#include<iostream>
#include<cmath>
using namespace std;
#define S(a,b,c) (a+b+c)/2
#define AREA(a,b,c) sqrt(S(a,b,c)*(S(a,b,c)-a)*(S(a,b,c)-b)*(S(a,b,c)-c))
int main(){
    float a,b,c,area;
    cin>>a>>b>>c;
	area=AREA(a,b,c);
    cout<<area;
}