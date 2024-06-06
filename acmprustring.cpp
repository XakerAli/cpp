#include<iostream>
using namespace std;
int c=0;
string aziz(string a)
{
	string f;
	f=c%10;
	cout<<a[f];
	c++;
}
int main()
{
	string a,b;
	cin>>a;
	b=aziz(a);
	cout<<b;
}
