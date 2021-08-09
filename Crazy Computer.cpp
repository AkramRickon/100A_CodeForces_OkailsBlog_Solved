
#include<iostream>
using namespace std;
int main()
{
    int n,t,i,cnt=1;
    cin>>n>>t;
    int a[n];

    for(i=0 ;i<n ;i++)
    {
        cin>>a[i];
    }

    for(i=0 ;i<n-1 ;i++)
    {
        if(a[i+1]-a[i]<=t)
        {
            cnt++;
        }
        else
        {
            cnt=1;
        }
    }
    cout<<cnt;
}
