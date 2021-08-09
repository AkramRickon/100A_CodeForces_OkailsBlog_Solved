
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,ans,i;
    string s;
    cin>>a>>b>>c>>d>>s;
    ans=0;
    for(i=0 ;i<s.size() ;i++)
    {
        if(s[i]=='1')   ans=ans+a;
        if(s[i]=='2')   ans=ans+b;
        if(s[i]=='3')   ans=ans+c;
        if(s[i]=='4')   ans=ans+d;
    }
    cout<<ans;

    return 0;
}
