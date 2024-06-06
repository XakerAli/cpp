#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double b,l,a;
	cin>>b>>l;
	a=pow(b,l);
	cout.precision(2);
	cout<<fixed<<(a*l)/a;
}
