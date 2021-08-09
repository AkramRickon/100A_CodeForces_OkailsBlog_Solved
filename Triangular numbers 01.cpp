
#include<iostream>
using namespace std;
int main()
{
    int n,i,x;
    cin>>n;
    for(i=1; i<=n ;i++)
    {
        x=i*(i+1)/2;
        if(x==n)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
