#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		if(i%3==0 or i%5==0 or i%7==0)
		{
			a=a+i;
		}
	}
	cout<<a;
}
