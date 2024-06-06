#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,c=0,k=0,b;
	while(cin>>a)
	{
		if(a>=c)
		{
			c=a;
			b=c;
			if(b==c)
			{
				k++;
			}
		}
		if(a==0)
		{
			break;
		}
	}
	cout<<k;
}
