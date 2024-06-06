#include<iostream>
using namespace std;
int main()
{
    int n,a,i=1;
    cin>>n;
    if(n>=1)
    {
        cout<<1<<" ";
    }
    while(true)
    {
        i=i*2;
        if(n<i)
        {
            break;
        }
        cout<<i<<" ";
    }
}
