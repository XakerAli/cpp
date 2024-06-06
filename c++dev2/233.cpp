#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int s=0,n;
	cin>>n;
	for(int i=0;i<=32;i++)
	{
		if(pow(2,i)==n)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
}
