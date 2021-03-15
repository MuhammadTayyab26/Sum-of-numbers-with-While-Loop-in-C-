#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int i,sum=0,sign=1;
i=1;
while(i<=99)
{
	cout<<"i="<<i<<endl;
	sign=sign*(-1);
	sum=sum+i*sign;
	i=i+2;
 } 
cout<<"sum="<<sum<<endl;
getch();
return 0;
}

