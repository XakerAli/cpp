#include<iostream>
using namespace std;
int main()
{
	int n,a,i=0;
	cin>>n;
	while(true)
	{
		i++;
		a=i*i;
		if(a>n)
		{
			break;
		}
		cout<<a<<" ";
	}
}
