#include<iostream>
#include<map>
int b[10000];
using namespace std;
int main()
{
	int a;
	cin>>a;
	for(int i=0;i<=a-1;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<=a-1;i++)
	{
		if(b[i]%2==0)
		{
			cout<<b[i]<<" ";
		}
	}
}
