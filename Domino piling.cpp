
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

int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

using namespace std;
int main()
{
    int y,w;
    cin>>y>>w;
    int a=max(y,w);
//    cout<<mx<<endl;
     a=(6-a)+1;
//    cout<<a<<endl;
    int GCD=gcd(a,6);
    cout<<a/GCD<<"/"<<6/GCD<<endl;

}
