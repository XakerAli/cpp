#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	for(int i=0;i<=a.size();i++)
	{
		if(a[i]=='4' or a[i]=='7')
		{
			continue;
		}
		cout<<a[i];
	}
}
