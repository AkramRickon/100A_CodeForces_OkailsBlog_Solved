



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4],i,cnt=0;
    cin>>a[0]>>a[1]>>a[2]>>a[3];

    for(i=0 ; i<3 ; i++)
    {
        for(int j=i+1; j<4 ; j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(i=0 ; i<3 ; i++)
    {
        if(abs(a[i]-a[i+1])>=1)
            cnt++;
    }
    cnt++;
    cout<< 4-cnt<<endl;

}

