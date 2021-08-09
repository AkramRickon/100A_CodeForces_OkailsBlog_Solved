

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
    string s;
    getline(cin,s);
    int length=s.length();
    int i;
    for(i=length-1; i>=0 ;i--)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
            break;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            break;
        }
    }
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y') cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
