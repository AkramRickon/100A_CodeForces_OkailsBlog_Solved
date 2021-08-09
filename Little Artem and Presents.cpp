#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=(n/3)*2;
    if(n%3)
        ans=ans+1;
    cout<<ans;
    return 0;
}
