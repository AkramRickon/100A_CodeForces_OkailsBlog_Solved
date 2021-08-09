
#include<iostream>
using namespace std;
int a[26];
int main()
{
    int i,n;
    string s;
    cin>>n>>s;
    for(i=0 ; i<s.size() ; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        a[s[i]-'a']++;
    }
    for(i=0 ; i<26 ; i++)
    {
        if(a[i]==0)
        {
            cout<<"NO"<<endl;
            break;
        }
    }
    if(i==26)
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
