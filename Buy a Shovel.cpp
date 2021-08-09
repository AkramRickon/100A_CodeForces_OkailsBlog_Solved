
#include<iostream>
using namespace std;
int main()
{
    int p,value,r,i;
    cin>>p>>r;
    i=1;
    while(1)
    {
        value=p*i;
        if((value%10==0) || (value%10==r))
        {
            break;
        }
        i++;
    }
    cout<<i<<endl;
    return 0;
}
