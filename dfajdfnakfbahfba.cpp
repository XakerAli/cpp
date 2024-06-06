#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	for(int i=0;i<=a-1;i++)
	{
		for(int j=30;j>=0;j--)
		{
			cout<<j<<" ";
			sleep(1);
		}
	}
	
}
