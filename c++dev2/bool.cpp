#include<iostream>
#include<map>
using namespace std;
int main()
{
	int a,c=0;
	string b[1000];
	cin>>a;
	for(int i=0;i<=a-1;i++)
	{
		cin>>b[i];
		if(b[i][1]%2==0 and b[i][2]%2==0 and b[i][3]%2==0 and b[i][4]%2==0)
		{
			c++;
		}
	}
	cout<<c;
}
