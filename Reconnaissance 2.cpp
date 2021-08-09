#include<iostream>
#include<stdio.h>
#include<cstring>
#include<set>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    int n,i,mn,x,y,a[100];
    cin>>n;

    for(i=0 ;i<n ;i++)
    {
        cin>>a[i];
    }
    mn=10000;

    for(i=0 ;i<n-1 ;i++)
    {
        if(abs(a[i+1]-a[i])<mn)
        {
            mn=abs(a[i+1]-a[i]);
            x=i+1;
            y=i+2;
        }
    }
    if(abs(a[n-1]-a[0])<mn)
    {
        x=n;
        y=1;
    }
    cout<<x<<" "<<y<<endl;

}