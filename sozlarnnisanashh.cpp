#include<iostream>
using namespace std;
int main()
{
	int a=0,n,c3,b2,s=0,t=0,x1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		c3=i%10;
		b2=(i/10)%10;
		x1=(i/100)%10;
		if(i<=10 or c3==0 and i<100)
		{
			a+=1;
		}
		else if(99>=i)
		{
			a+=2;
		}
		else if(i==100)
		{
			a+=1;
		}
		else if( i>=100 and i<=999 and b2==0 and x1!=0 and c3==0)
		{
			a+=2;
		}
		else if( i>=100 and i<=999 and b2==0 and x1!=0 and c3!=0)
		{
			a+=3;
		}
		else if( i>=100 and i<=999 and b2!=0 and x1!=0 and c3==0)
		{
			a+=3;
		}
		else
		{
			a+=4;
		}
		cout<<i<<" "<<a<<endl;
	}
}

