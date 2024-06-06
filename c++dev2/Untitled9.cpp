#include <iostream>
using namespace std;
int az(int n)
{
	if(n<2)return 0;
	int k=n/2;
	while (n%k)k--;
	return(k>1)?0:n;
	}
	main()
	{
	int a,b,c,s;
	cin>>a>>b>>c;
	s=az(a)+az(b)+az(c);
	cout<<s;
	cout<<((az(s))?" yes":" no");
}
