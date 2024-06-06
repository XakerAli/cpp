#include<iostream>
using namespace std;
int main()
{
	string a,d;
	int b,n;
	cin>>b;
	for(int i=1;i<=b;i++)
	{
		cin>>a;
		n=a.size()-2;
		if(a.size()<=10)
		{
		cout<<a;
		}
		if(a.size()>10)
		{
			cout<<a[0]<<n<<a[n-1]<<endl;
		}
	}
}

