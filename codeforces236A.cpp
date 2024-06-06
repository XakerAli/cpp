#include<iostream>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int b=a.size();
	if(b%2!=0)
	{
		cout<<"IGNORE HIM!";
	}
	else
	{
		cout<<"CHAT WITH HER!";
	}
}
