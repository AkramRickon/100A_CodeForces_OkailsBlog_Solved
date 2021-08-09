#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c,ans=0;
    int t;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c;
        ans=(a+b+c)/2;
        cout<<ans<<endl;
    }
    return 0;

}
