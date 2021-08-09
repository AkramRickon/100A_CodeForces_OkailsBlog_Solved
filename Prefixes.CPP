
#include<iostream>
using namespace std;
int main()
{
    int n,i,cnt=0;
    string s;
    cin>>n>>s;
    for(i=0; i<n; i+=2)
    {
        if(s[i]=='a' && s[i+1]=='b')
        {
            cnt++;
        }
        else if(s[i]=='b' && s[i+1]=='a')
        {
            cnt++;
        }
    }
    if(cnt*2==n)
    {
        cout<<0<<endl;
        cout<<s<<endl;
    }
    else if(cnt==0)
    {
        cout<<n/2<<endl;
        for(i=0 ;i<n ;i+=2)
        {
            cout<<'a'<<'b';
        }
    }
    else
    {
        int x=n-cnt*2;
        cout<<x/2<<endl;
        for(i=0; i<n ;i+=2)
        {
            if(s[i]==s[i+1])
            {
                cout<<'a'<<'b';
            }
            else
            {
                cout<<s[i]<<s[i+1];
            }
        }

    }
    return 0;
}
