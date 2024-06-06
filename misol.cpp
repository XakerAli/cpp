#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int c=0;
	cin>>a>>b;
	c=a+b;
	if(c<=59 and c>=0)
	{
		cout<<"2";
	}
	else if(c<=69 and c>=60)
	{
		cout<<"3";
	}
	else if(c<=89 and c>=70)
	{
		cout<<"4";
	}
	else if(c<=100 and c>=90)
	{
		cout<<"5";
	}
}
