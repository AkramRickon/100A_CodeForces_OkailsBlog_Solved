
#include<iostream>
using namespace std;
int main()
{
    int n,x,t,taken=0,refused=0;
    long long int icecream;
    char ch;
    cin>>n>>x;
    icecream=x;
    while(n--)
    {
        cin>>ch>>t;
        if(ch=='+')
        {
            icecream+=t;
        }
        else
        {
            if(icecream>=t) icecream-=t;
            else            refused++;
        }
    }
    cout<<icecream<<" "<<refused<<endl;
    return 0;
}
