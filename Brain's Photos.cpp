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
    int m,n,flag=1;
    cin>>m>>n;
    cin.ignore();
    string s[m];

    for(int i=0 ; i<m ; i++)
    {
        getline(cin,s[i]);
        cin.ignore();
    }
    for(int i=0 ; i<m ; i++)
    {
        for(int j=0 ; j<s[i].size() ; j++)
        {
            if(s[i][j]=='C' || s[i][j]=='M'|| s[i][j]=='Y')
            {
                flag=0;
                break;
            }
        }
        if(flag==0) break;
    }
    if(flag)
        cout<<"#Black&White"<<endl;
    else
        cout<<"#Color"<<endl;


}
