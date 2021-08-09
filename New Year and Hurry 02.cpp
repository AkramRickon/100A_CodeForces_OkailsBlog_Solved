
#include<iostream>
using namespace std;
int main()
{
    int n,k,i;
    cin>>n>>k;
    for(i=1; i<=n ;i++)
    {
        k+=(i*5);
        if(k>240)
        {
            break;
        }
    }
    i--;
    cout<<i<<endl;
    return 0;
}
