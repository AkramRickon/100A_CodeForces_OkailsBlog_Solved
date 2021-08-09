#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[100],s2[100];
    int ans=0,length1=0,length2=0;
    cin>>s1>>s2;
    length1=strlen(s1);
    length2=strlen(s2);
    for(int i=0 ; i<length1; i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
            s1[i]+=32;
    }
    for(int i=0 ; i<length2; i++)
    {
        if(s2[i]>='A' && s2[i]<='Z')
            s2[i]+=32;
    }

    ans=strcmp(s1,s2);

    cout<<ans<<endl;

}
