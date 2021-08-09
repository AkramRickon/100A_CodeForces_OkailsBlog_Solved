
#include<iostream>
using namespace std;
int power(int n)
{
    int i,power;
    power=1;
    for(i=1 ;i<=n ;i++)
    {
        power=power*2;
    }
    return power;
}
int main()
{
    int t,n,x,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=2 ;i<10e9 ;i++)
        {
            int p=power(i)-1;
            if(n%p==0)
            {
                cout<<n/p<<endl;
                break;
            }
        }
    }
    return 0;
}
