
#include<iostream>
using namespace std;
int main()
{
    int i,n,m,x,y,ans;
    cin>>n>>m;
    ans=0;
    for(i=0 ;i<n*m ;i++)
    {
        cin>>x>>y;
        ans+=(x|y);
    }
    cout<<ans<<endl;
    return 0;
}
