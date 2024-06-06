#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	string a,b;
	cin>>a;
	int c=a.size();
	if(c%2!=0)
	{
		cout<<"Lose";
	}
	else
	{
		cout<<"Win";
	}
}
