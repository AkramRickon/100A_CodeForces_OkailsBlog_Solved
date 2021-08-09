
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n+1];
    a[0]=0;
    for(i=1 ;i<=n ;i++)
    {
        a[i]=i+a[i-1];
    }
    for(i=1 ;i<=n ;i++)
    {
        if(a[i]==n)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
