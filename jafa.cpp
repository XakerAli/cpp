#include<iostream>
#include<map>
using namespace std;
int main()
{
  string a,b,summ="",z="";
  int n,m,k,d=0,x,y,s;
  cin>>a>>b;
  if(a.size()<b.size())
  {
    swap(a,b);
  }
  n=a.size();
  m=b.size();
  k=n-m;
  for(int i=0;i<=k-1;i++)
  {
    b='0'+b;
  }
  for(int i=n-1;i>=0;i--)
  {
    x=int(a[i]-48);
    y=int(b[i]-48);
    x=x-d;
    if(y>x)
    {
	    d=1;
	    x=x+10;
	}
    else
    {
    	d=0;
	}
    s=x-y;
    summ = char(s%10+48) + summ;
  }
	cout<<summ;
}
