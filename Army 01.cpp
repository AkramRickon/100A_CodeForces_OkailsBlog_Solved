
#include<iostream>
using namespace std;
int main()
{
    int n,a,b,d[100],ans=0;

    cin>>n;
    for(int i=0 ;i<n-1;i++)
    {
        cin>>d[i];
    }

    cin>>a>>b;

    for(int i=a-1 ;i<b-1;i++)
    {
        ans=ans+d[i];
    }
    cout<<ans<<endl;

}
