#include<iostream>
using namespace std;
int gcd(int n,int m)
{
    if(m==0) return n;
    return   gcd(m,n%m);
}
int main()
{
    int n,m,k,GCD,LCM;
    cin>>n>>m>>k;
    GCD=gcd(n,m);
    LCM=n*m/GCD;
    cout<<k/LCM;
}
