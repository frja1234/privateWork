#include<iostream>
using namespace std;
/*void move(int **);
int a[3][3];
move(a);//错误，类型不匹配
move(a[0]);//错误。类型不匹配*/

//方法 1:
int main()
{
	void convert(int **);
	int *a[3],i,j;
	for(i=0;i<3;i++)
		a[i]=new int[3];
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			cin>>a[i][j];
	convert(a);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
void convert(int **a)
{
	int t;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<i;j++)
		{
			t=a[i][j];	//可以直接a[i][j]
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
	}
}
//方法 2:
/*int main()
{
	void move(int *);
	int a[3][3],*p;
	p=&a[0][0];
	move(p);
}*/
void move(int *p)
{
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		{
			*(p+3*i+j)=1;		//不能用p[i][j];
		}
}
