
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,ans=0;
    cin>>a>>b>>c;
    while(a>=1 && b>=2 && c>=4)
    {
        ans+=1+2+4;
        a-=1;
        b-=2;
        c-=4;
    }
    cout<<ans<<endl;
    return 0;
}
