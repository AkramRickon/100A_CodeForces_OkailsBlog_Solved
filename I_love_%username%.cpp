
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx,mn,cnt;
    cin>>n;
    int a[1000];

    for(int i=0 ;i<n ;i++)
    {
        cin>>a[i];
    }
    mx=a[0];
    mn=a[0];
    cnt=0;
     for(int i=1 ;i<n ;i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
            cnt++;
        }
       else if(a[i]<mn)
        {
            mn=a[i];
            cnt++;
        }
    }

    cout<<cnt<<endl;
}
