
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<set>
#include<vector>
#include <map>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    int n,i,j,mx,mn,ans;
    cin>>n;
    int a[n];
    for(i=0 ; i<n ; i++)
        cin>>a[i];
    mx=a[0];
    mn=a[0];
    for(i=0 ; i<n ; i++)
    {
        if(a[i]>mx)
            mx=a[i];
        if(a[i]<mn)
            mn=a[i];
    }
    ans=mx+mn;
    for(i=0 ; i<n-1 ; i++)
    {
        for(j=i+1 ; j<n ; j++)
        {
            if(a[i]+a[j]==ans)
            {
                cout<<i+1<<" "<<j+1<<endl;
                a[i]=0;
                a[j]=0;
                break;
            }
        }
    }
}
