#include<iostream>
#include<map>
using namespace std;
int main()
{
  map<int,int> mp;
    long long int a,b,c,d,x[10],y,z=0;
    
  cin>>a>>b>>c>>d;
  if(d<a and d<b)
  {
    z=z+c/d;
  }
  if(d<a and d<c)
  {
    z=z+b/d;
  }
  if(d<b and d<c)
  {
    z=z+a/d;
  }
  cout<<z;
  
}
