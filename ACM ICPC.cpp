#include<iostream>
using namespace std;
int main()
{
    int a[6];
    int i,j,k,sum1=0,sum2,flag=0;
    for(i=0 ; i<6 ; i++)
    {
        cin>>a[i];
        sum1+=a[i];
    }
    for(i=0 ; i<4 ; i++)
    {
        for(j=i+1; j<5 ; j++)
        {
            for(k=j+1 ; k<6 ; k++)
            {
                sum2=a[i]+a[j]+a[k];
                if(sum2*2==sum1)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
