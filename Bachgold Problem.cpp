
#include<iostream>
using namespace std;
int main()
{
    int n,k,t;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
        k=n/2;
        while(k--)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        cout<<n/2<<endl;
        k=n/2-1;
        while(k--)
        {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
    return 0;
}
