
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[2001],cnt=0,i,j;
    cin>>n>>k;

    for(i=0 ;i<n ;i++)
    {
        cin>>a[i];
        a[i]+=k;
        if(a[i]<=5) cnt++;
    }
    cout<<cnt/3<<endl;

}
