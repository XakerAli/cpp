#include<iostream>
using namespace std;
int main()
{ 
    int a[1000],n,mx,ind;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        mx=a[1];
        ind=1;
        for(int j=1;j<=n-i+1;j++)
        {
            if(a[j]>mx)
            {
                mx=a[j];
                ind=j;
            }
        }
        swap(a[n-i+1],a[ind]);
    }
}
