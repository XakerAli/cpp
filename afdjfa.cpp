#include<iostream>
using namespace std;
int main()
{
	int a=0,n,c3,b2,s=0,t=0,x1;
	cin>>n;
		for(int i=1;i<=n;i++)
		{
			c3=i%10;
			b2=(i/10)%10;
			if(i<=10 or c3==0 and i<100)
			{
				s+=1;
			}
			else
			{
				s+=2;
			}
		}
			cout<<s;
}
