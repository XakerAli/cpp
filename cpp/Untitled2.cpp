#include <iostream>
using namespace std;
int main() 
{
	string a;
	cin>>a;
	int b;
	b=a.size() ;
	for(int i=0;i<=b-1;i++)
	{
		cout<<a[i]<<"#";
		if(a[b[i]]=='#')
		{
			continue;
		}
	}
	
}
