#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,x1,y,y1,a,b;
	cin>>x>>y>>x1>>y1;
	a=x-y;
	b=x1-y1;
	if(b==a)
	cout<<"YES";
	else
	cout<<"NO";
}
