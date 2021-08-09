

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[101],n,x;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>x;
        a[x]=i;
    }
    for(int i=1; i<=n; i++)
    {
            cout<<a[i]<<" ";
    }
    cout<<endl;
}
