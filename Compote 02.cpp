#include<iostream>
using namespace std;
int main()
{
    int a,b,c,ans;
    cin>>a>>b>>c;
    a=a/1;
    b=b/2;
    c=c/4;
    ans=min(a,min(b,c));
    ans=ans*1+ans*2+ans*4;
    cout<<ans;
    return 0;
}
