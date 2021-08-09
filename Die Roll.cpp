
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    int n,m,mx,GCD;
    cin>>n>>m;
    mx=max(n,m);
    mx=6-mx+1;
    GCD=gcd(mx,6);
    cout<<mx/GCD<<"/"<<6/GCD<<endl;
    return 0;
}
