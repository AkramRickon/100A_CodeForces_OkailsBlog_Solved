#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r_sum=0,ans;
    cin>>n;
    r_sum=n-10;
    if((r_sum>=1 && r_sum<=9) || (r_sum==11))   cout<<4<<endl;

    else if(r_sum==10)  cout<<15<<endl;

    else cout<<0<<endl;
}

