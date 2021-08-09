#include<iostream>
using namespace std;
int main()
{
    string s;
    int n,ans=0;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if((s[0]=='+' && s[1]=='+') ||(s[1]=='+' && s[2]=='+')) ans++;
        else                                                    ans--;
    }
    cout<<ans<<endl;
    return 0;
}
