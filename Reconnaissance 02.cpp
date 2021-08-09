#include<iostream>
#include<stdio.h>
#include<cstring>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    int n,d,i,j,cnt=0,a[1000];
    cin>>n>>d;
    for(i=0; i<n ;i++)
    {
        cin>>a[i];
    }
    for(i=0 ;i<n ;i++)
    {
        for(j=0; j<n;j++)
        {
            if(abs(a[i]-a[j])<=d) cnt++;
        }
    }
    cout<<cnt*2<<endl;
}
