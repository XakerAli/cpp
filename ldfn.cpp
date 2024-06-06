#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
	string a;
	getline(cin,a);
	int c=0,b=0;
	for(int i=0;i<=a.size()-1;i++)
	{
		if(a[i]=='x' or a[i]=='a')
		{
			continue;
		}
		cout<<a[i];
	}
}
