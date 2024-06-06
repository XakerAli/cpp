#include<iostream>
#include<math.h>
using namespace std;
int a[10000];
int main()
{
    long long int n,i=1,s=0,c=0,f=0;
    cin>>n;
    for(int i=0;i<=33;i++)
    {
    	if(pow(i,2)==n)
		{
			c++;
		}
		cout<<pow(i,2)
	}
	if(c>=1)
	{
		cout<<"YES";
	}
	else
    cout<<"NO";
}
