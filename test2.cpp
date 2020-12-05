#include<iostream>
using namespace std;
int fun(char *a)
{
    int i;
    for(i=0;a[i];i++)
    {
        2putchar(a[i]);
    }
    --i;
    while (i>=0)
    {
      putchar(a[i]);
      --i;
    }
    return  0;

}
int main(){
    char a[100];
    scanf("%s",a);
    fun(a);
    return 0;
}