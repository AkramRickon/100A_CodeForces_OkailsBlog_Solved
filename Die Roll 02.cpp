#include<iostream>
using namespace std;
int main()
{
    string s[6]={"1/1","5/6","2/3","1/2","1/3","1/6"};
    int n,m,mx;
    cin>>n>>m;
    mx=max(n,m);
    cout<<s[mx-1];
    return 0;
}
