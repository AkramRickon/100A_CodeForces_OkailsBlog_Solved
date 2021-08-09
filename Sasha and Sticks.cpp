#include<iostream>
using namespace std;
int main()
{
    long long int x,y,ans;
    cin>>x>>y;
    ans=x/y;
    if(ans%2==1)    cout<<"YES"<<endl;
    else            cout<<"NO"<<endl;
    return 0;
}
