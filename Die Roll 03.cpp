
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
    int y,w;
    string s[6]={"1/1","5/6","2/3","1/2","1/3","1/6"};
    cin>>y>>w;
    int mx=max(y,w);
//    cout<<mx<<endl;
    cout<<s[mx-1]<<endl;
}
