#include<iostream>
#include <unistd.h>
#include <windows.h>
using namespace std;
int main()
{
	string a;
	int b;
	cin>>b;
	for(int i=0;i<b;i++)
	{
		cin>>a[i];
		for(int j=0;j<=0;j++)
		{
			cout<<a[i]<<" ";
			sleep(2);
		}
	}
	for(int i=0;i<b;i++)
	{
		for(int j=0;j<=a[i].size()-1;j++)
		{
			cout<<a[i]<<" ";
			sleep(2);
		}
	}
}
