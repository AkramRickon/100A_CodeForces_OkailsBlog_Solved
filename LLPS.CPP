
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   int c[26];
   cin>>s;

    for(int i=0 ; i<26 ; i++)
    {
        c[i]=0;
    }

    for(int i=0 ; i<s.size() ; i++)
    {
        c[s[i]-'a']++;
    }

    for(int i=25; i>=0  ; i--)
    {
        if(c[i]>0)
        {
            int x=c[i];

            while(x--)
            {
                printf("%c",i+'a');
            }
            break;
        }

    }

}
