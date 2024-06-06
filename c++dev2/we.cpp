#include<iostream>
#include<deque>
using namespace std;
int a[1000];
int main()
{
	deque<int>dq;
	int n,i=0,s=0,c=0,f=0,mx=0;
//	cin>>n;
	while(true)
	{
		s++;
		cin>>a[s];
		if(a[s]==0 and a[s-1]==0)
		{
			break;
		}
		mx=mx+a[s];
	}
}
