
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    char ch;
    int n,i,j,cnt,ans=0;
    cin>>n>>s;
    for(i=0 ; i<n ; i++)
    {
        cnt=0;
        if(s[i]==s[i+1])
        {
            cnt++;
            ch=s[i];
            i=i+2;
           for(j=i ;j<n ;j++)
           {
               if(s[j]==ch) cnt++;
               else break;
           }
           i=j-1;
           ans+=cnt;
        }
    }
    cout<<ans;
    return 0;
}
