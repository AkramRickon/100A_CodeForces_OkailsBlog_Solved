

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int k=0,l=0;

    for(int i=0; i<s1.length();i++)
    {
        for(int j=0; j<s3.length();j++)
        {
            if(s1[i]==s3[j])
               {
                s3[j]='0';
                k++;
                break;
               }
        }

    }
     for(int i=0; i<s2.length();i++)
    {
        for(int j=0; j<s3.length();j++)
        {
            if(s2[i]==s3[j])
                {
                    s3[j]='0';
                    k++;
                    break;
                }
        }

    }
    l=s1.length()+s2.length();
   // cout<<"k "<<k<<" "<<s1.size()+s2.size()<<" "<<s3.size()<<endl;
    if(l==s3.length() && k==l) cout<<"YES"<<endl;
    else   cout<<"NO"<<endl;


}
