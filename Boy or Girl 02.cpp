



#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt[26],ans=0;
    cin>>s;

    for(int i=0 ; i<26 ; i++)
    {
        cnt[i]=0;
    }

    for(int i=0 ; i<s.size() ; i++)
    {
        cnt[s[i]-'a']++;
    }


    for(int i=0 ; i<26 ; i++)
    {
        if(cnt[i]!=0)  ans++;
    }

    if(ans%2==0) cout<<"CHAT WITH HER!"<<endl;
    else          cout<<"IGNORE HIM!"<<endl;

}
