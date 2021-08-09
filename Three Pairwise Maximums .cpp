#include<iostream>
using namespace std;
int main()
{
    int t,a[3],i,j;
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2];
        for(i=0 ; i<2 ; i++)
        {
            int temp;
            for(j=i+1; j<3 ; j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
        if(a[1]!=a[2])
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<a[0]<<" "<<a[0]<<" "<<a[1]<<endl;
        }
    }
    return 0;
}
