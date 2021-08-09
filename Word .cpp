
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<set>
#include<vector>
#include <map>
#include<algorithm>
#include<string>

using namespace std;
int main()
{
    string s1;
    int i,p=0,q=0;
    cin>>s1;

    for(i=0 ; i<s1.size(); i++)
    {
        if(s1[i]>='A' && s1[i]<='Z') p++;
        else                         q++;
    }
    if(p>q)
    {
        for(i=0; i<s1.size();i++)
        {
            if(s1[i]>='a' && s1[i]<='z') s1[i]=s1[i]-32;
        }
    }
    else
        for(i=0; i<s1.size();i++)
        {
            if(s1[i]>='A' && s1[i]<='Z') s1[i]=s1[i]+32;
        }
        cout<<s1;
}
