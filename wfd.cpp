#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,c=0,m,n,ind;
	string b; 
	cin>>b;
	int mx=b[0];
	for(int j=0;j<=3-1;j++)
	{
		for(int i=0;i<=b.size()-1;i++)
		{
			if(b[i]<mx)
			{
				mx=b[i];
				ind=i;
			}
		}
		swap(b[j],b[ind]);
	}
	for(int i=ind;i<=b.size()-1;i++)
	{
		cout<<b[i];
	}	
}
