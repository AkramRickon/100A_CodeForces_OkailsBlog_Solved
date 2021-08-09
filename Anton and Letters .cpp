
#include<iostream>
using namespace std;
int a[26];
int main()
{
    int i,cnt=0;
    string s;
    getline(cin,s);
    for(i=0 ;i<s.size() ;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            a[s[i]-'a']++;
        }
    }
    for(i=0 ;i<26 ;i++)
    {
        if(a[i]>0)
            cnt++;
    }
    cout<<cnt;
    return 0;
}
