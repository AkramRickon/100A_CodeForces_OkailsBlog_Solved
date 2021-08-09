

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
    int n;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        int length=s.length();
        if(length>10)
        {
            cout<<s[0]<<length-2<<s[length-1]<<endl;
        }
        else    cout<<s<<endl;
    }
}
