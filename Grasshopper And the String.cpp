#include<iostream>
using namespace std;
int main()
{
    string s;
    int pp,cp,i,jump,ans;
    cin>>s;
    pp=cp=jump=ans=0;

    for(i=0 ; i<s.size(); i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
        {
            cp=i+1;
            jump=cp-pp;
            ans=max(ans,jump);
            pp=cp;
        }
    }
    jump=s.size()+1-cp;
    ans=max(ans,jump);
    cout<<ans<<endl;
}
