#include<iostream>
using namespace std;
int main()
{
	int a,n,b=0,c=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		a=i%10;
		if(a==0)
		{
			b+=1;
		}
		else if(i<=10)
		{
			b+=1;
		}
		else
		{  
			b+=2;
		}
		cout<<i<<" "<<b<<" "<<a<<"\n";
	}
	//1dan 999999999gacha
}
