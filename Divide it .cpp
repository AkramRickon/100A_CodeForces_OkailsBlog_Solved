


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,cnt;
    long long int n;
    cin>>q;
    while(q--)
    {
        cnt=0;
        cin>>n;
        while(n!=1)
        {
            if(n%2==0)       n=n/2,cnt++;
            else if(n%3==0)  n=2*n/3,cnt++;
            else if(n%5==0)  n=4*n/5,cnt++;
            else
            {
                if(n!=1)
                {
                    cnt=-1;
                    break;
                }
            }

        }
        cout<<cnt<<endl;
    }
}
