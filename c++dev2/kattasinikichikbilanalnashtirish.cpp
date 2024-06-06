#include <iostream>
using namespace std;
main()
{
	int a[1000],n;cin>>n;
	for(int i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	int mx=a[0],mn=a[0],kata,kichik;
	for(int i=0;i<=n-1;i++)
	{
		if(a[i]>=mx)
		{
			mx=a[i];
			kata=i;
		}
		if(a[i]<=mn)
		{
			mn=a[i];
		}
		a[kata]=mn;
		cout<<a[i]<<" "<<mx<<" "<<mn<<endl;
	}
	for(int i=0;i<=n-1;i++)
	{
		
	}
}

