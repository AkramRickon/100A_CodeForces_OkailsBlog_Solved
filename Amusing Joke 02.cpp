
#include<bits/stdc++.h>
using namespace std;
int f1[26],f2[26],flag;

int main()
{
    string s1,s2,s3;
    int l=0,k=0,flag=0;
    cin>>s1>>s2>>s3;

    for(int i=0; i<s1.size(); i++)
    {
        f1[s1[i]-'A']++;
    }
    for(int i=0; i<s2.size(); i++)
    {
        f1[s2[i]-'A']++;
    }

    for(int i=0; i<s3.size(); i++)
    {
        f2[s3[i]-'A']++;
    }
    l=s1.size()+s2.size();
    k=s3.size();
    if(k==l)
    {
        for(int i=0; i<26; i++)
        {
            if(f1[i]!=f2[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

}
