#include <iostream>
using namespace std;
int main ()
{
	int h,m,s,x,y,z;
	cin >>h>>m>>s>>x>>y>>z;
	h=(h*60*60)+(m*60)+s;
	x=(x*60*60)+(y*60)+z;
	if (h>x)
	{
		cout<<h-x;
	}
	else
	{
		cout<<x-h;
	}
}
