#include<iostream>
using namespace std;
int main()
{
	string a;
	int c=0;
	cin>>a;
	for(int i=0;i<=a.size()-1;i++)
	{
		if(a[i]==a[i+1] and a[i]==a[i-1])
		{
			c++;
		cout<<a[i]<<" "<<c<<endl;
		}
	}
}
