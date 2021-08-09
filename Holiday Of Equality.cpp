#include<iostream>
using namespace std;

int main()
{
    int n,a[100],mx,i,ans=0;
    cin>>n;
    mx=-1;
    for(i=0 ;i<n ;i++)
    {
        cin>>a[i];
        if(a[i]>mx) mx=a[i];
    }
    for(i=0 ;i<n ;i++)
    {
        ans+=mx-a[i];
    }
    cout<<ans;
}
