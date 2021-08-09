#include<iostream>
using namespace std;
int main()
{
    int n,Mishka,Chris,x,y;
    cin>>n;
    Mishka=Chris=0;
    while(n--)
    {
        cin>>x>>y;
        if(x>y)
        {
            Mishka++;
        }
        else if(y>x)
        {
            Chris++;
        }
    }
    if(Mishka>Chris)
    {
        cout<<"Mishka"<<endl;
    }
    else if(Chris>Mishka)
    {
        cout<<"Chris"<<endl;
    }
    else
        cout<<"Friendship is magic!^^"<<endl;
    return 0;
}
