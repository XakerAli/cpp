#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long int a,c=0,b;
	cin>>a;
	b=sqrt(a);
	for(int i=1;i<=b;i++)
	{
		if(b%i==0)
		c++;
	}
	cout<<c;
}
