#include<iostream>
using namespace std;
int main()
{
    int n,h,x,t,width=0;
    cin>>n>>h;
    t=n;
    while(n--)
    {
        cin>>x;
        if(x>h) width++;
    }
    cout<<width*2+(t-width);
    return 0;
}
