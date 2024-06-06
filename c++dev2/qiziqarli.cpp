#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long int a;
	int b,c=0;
	cin>>a;
	for(int i=1;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			c++;
		}
	}
	if(c%2==0)
	{
		cout<<"Qiziqarli emas";
	}
	else
	{
		cout<<"Qiziqarli";
	}
}
