
#include<iostream>
using namespace std;
int main()
{
    int n,i,a,b,ans=0;
    cin>>n;
    int d[n-1];
    for(i=0 ;i<n-1 ;i++)
    {
        cin>>d[i];
    }
    cin>>a>>b;

    for(i=a ;i<b ;i++)
    {
        ans+=d[i-1];
    }
    cout<<ans<<endl;
    return 0;
}
