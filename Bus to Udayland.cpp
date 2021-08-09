
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
    int n,flag=0;
    cin>>n;
    string s[1001];
    for(int i=0 ; i<n ; i++)
    {
        cin>>s[i];
    }
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<s[i].size()-1; j++)
        {
            if(s[i][j]=='O' && s[i][j+1]=='O')
            {
                s[i][j]='+';
                s[i][j+1]='+';
                flag=1;
                j++;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag)
    {
        cout<<"YES"<<endl;
        for(int i=0 ; i<n ; i++)    cout<<s[i]<<endl;
    }
    else    cout<<"NO"<<endl;
}

