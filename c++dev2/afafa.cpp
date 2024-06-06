#include<iostream>
using namespace std;
int damir;
void aziz(long long int son,long long int toq,long long int juft)
{
	if(son==0)
	{
		cout<<juft<<" "<<toq;
	}
	if(son%2==0)
	{
		juft=juft+son;
	}
	else
	{
		toq=toq+son;
	}
	return aziz(son-1,toq,juft);
}
int main()
{
	long long int son,daraja,func,func2;
	cin>>son;
	aziz(son,0,0);
	//func,func2=aziz(son,0,0,son);
	//cout<<func<<" "<<func2;
}
