
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if (b==0) return a;
    return gcd(b,a%b);
}

int main()
{
    int a,b,n,i;
    cin>>a>>b>>n;

    for(i=1 ; n!=0 ;i++)
    {
        if(i%2!=0)
        {
            n=n-(gcd(a,n));
        }
        else
        {
            n=n-(gcd(b,n));
        }
    }
    i--;

    if(i%2!=0) cout<<0<<endl;
    else       cout<<1<<endl;


}
