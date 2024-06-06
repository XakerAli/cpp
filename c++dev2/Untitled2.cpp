#include<iostream>
using namespace std;
int main()
{
	char a;
	cin>>a;
	int c,b;
	c=a;
	if(c>=65 and a<=92)
	b=c+32;
	else if(c>=90 and a<=122)
	b=c-32;
	cout<<char(b);
}
