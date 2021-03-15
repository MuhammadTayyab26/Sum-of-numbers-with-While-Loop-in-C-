#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,sum=0,sign=1;
	i=2;
	while(i<=100)
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

