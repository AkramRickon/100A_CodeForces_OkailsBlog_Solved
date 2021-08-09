

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,n,m,t=0;

    cin>>n>>m;

    for(int i=0; i<=31 ; i++)
    {
        for( int j=0 ; j<=31 ; j++)
        {
                if(i*i+j==n && i+j*j==m) t++;
        }
    }
    cout<<t;
}
