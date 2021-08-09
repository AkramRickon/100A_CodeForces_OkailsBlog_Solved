
#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n)
{
    int sqRt,i;
    sqRt=sqrt(n);
    for(i=2 ; i<=sqRt ; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,i,x;
    cin>>n;
    for(i=1 ; ; i++)
    {
        x=n*i+1;
        if(!isprime(x))
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
