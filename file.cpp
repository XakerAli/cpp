#include<iostream>
#include<fstream>
using namespace std;
string aziz(int a)
{
	string v;
	v=a+48;
	return v;
}
int main()
{
		
	int a,b,c,jav,file;
	cin>>a;
	for(int i=0;i<=a-1;i++)
	{
		cin>>b>>c;
		jav=b+c;
		string aa="C:\\Users\\XakerAli\\Desktop\\codecpp\\d"+aziz(i)+".txt";
		ofstream file(i.c_str());
	}
}
