
#include<iostream>
using namespace std;
int f[10001];
int main()
{
    int n,m,k,i,cnt=0;
    cin>>n>>m>>k;
    for(i=n ;i<=k ;i+=n)
    {
        f[i]++;
    }
    for(i=m ;i<=k ;i+=m)
    {
        f[i]++;
    }
    for(i=n ;i<=k ;i+=n)
    {
        if(f[i]==2)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
