
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b,i;
    cin>>a>>b;

    for( i=a+1 ; i<=50 ; i++)
    {
        int sqRt=sqrt(i);
        int flag=1;
        for(int j=2 ; j<=sqRt ; j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
            
        }
        if(flag)
        {
            break;
        }
    }
   // cout<<"i: "<<i<<endl;
    if(i==b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
