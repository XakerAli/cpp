#include<iostream> 
#include<cmath> 
using namespace std; 
int main() 
{ 
	long long int a,b,c,d,V,T,u,g; 
	cin>>a>>b; 
	if(b<0)
	{
		b=b*-1;
	}
	if(a>=0) 
    { 
		cout<<a%b; 
    } 
    else 
    { 
		d=-1*a/b+1; 
		c=a+d*b;
		cout<<c%b;   
    } 
}
