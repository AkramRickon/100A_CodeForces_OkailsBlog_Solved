
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<set>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ;i<n; i++)
    {
        cin>>a[i];
    }
    int mx=a[0];
    int mn=a[0];
    int mxp=mnp=1;

    for(i=0; i<n; i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
            mxp=i+1;
            break;
        }
    }
     for(i=0; i<n; i++)
    {
        if(a[i]>mnp)
        {
            mn=a[i];
            mnp=i+1;
            break;
        }
    }

    ans=(mxp-1)+(n-mnp);
    if(mxp>mnp) cout<<ans-1<<endl;
    else        cout<<ans<<endl;



}
