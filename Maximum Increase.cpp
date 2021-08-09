
#include<iostream>
using namespace std;
int main()
{
    int n,i,cnt=1,ans=1;
    cin>>n;
    int a[n];
    for(i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    for(i=0 ; i<n-1 ; i++)
    {
        if(a[i]<a[i+1])
        {
            cnt++;
        }
        else
        {
            cnt=1;
        }
        ans=max(ans,cnt);
    }
    cout<<ans;
    return 0;
}
