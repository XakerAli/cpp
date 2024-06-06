#include<iostream>
using namespace std;
int main()
{
	string a,b;
	int s=0;
	getline(cin,a);
	for(int i=0;i<=a.size()-1;i++)
	{
		for(int j=0;j<=a.size()-1;j++)
		{
			if(a[j]==a[0])
			{
				s++;
			}
		}
	}
	cout<<s;
}
