#include<iostream>
using namespace std;
#define SIZE 6
class complex{
    private:
    	int a[SIZE];
	public:
    	complex(){
            for(int i=0;i<SIZE;i++){
				a[i]=i+i;
     		}
        }
        int& operator[](int i);
};
int & complex::operator[](int i){
	if(i>=SIZE){
		cout<<"超过边界！"<<endl;
		return a[0];
	}else{
		return a[i];
	}

}
int main(){
	complex c1,c2;
	cout<<c1[6]<<endl;
	cout<<c1[2]<<endl;
}