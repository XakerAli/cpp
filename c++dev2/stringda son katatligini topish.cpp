#include<iostream>
#include<map>
using namespace std;
int main()
{
	string a,b,d ;
	cin>>a>>b ;
	int n,m,k ;
	n=a.size() ;
	m=b.size() ;
	if(n<m)
	{
		swap(a,b);
		n=a.size() ;
		m=a.size() ;
	}
	k=m-n;
	for(int i=0;i<=k;i++)
	{
		b='0'+b ;
	}
	(a>b)?cout<<a:cout<<b;
}
