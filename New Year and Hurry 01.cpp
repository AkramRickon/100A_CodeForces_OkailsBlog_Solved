
#include<iostream>
using namespace std;
int main()
{
    int n,k,i,cnt=0;
    cin>>n>>k;
    i=1;
    while(n--)
    {
        k+=(i*5);
        i++;
        if(k<=240)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
