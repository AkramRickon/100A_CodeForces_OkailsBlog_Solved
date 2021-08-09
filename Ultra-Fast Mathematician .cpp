
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
    string s1,s2;
    int j,i;
    cin>>s1>>s2;

    for(i=0 ; i<s1.size(); i++)
    {
        if(s1[i]==s2[i])
            cout<<0;
        else
            cout<<1;
    }

}
