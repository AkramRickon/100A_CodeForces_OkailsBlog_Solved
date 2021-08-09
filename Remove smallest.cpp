
#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,x,a[101],f[101],flag=0;

        for(i=0 ; i<=100 ; i++)
        {
            f[i]=0;
        }
        cin>>n;
        for (i=0; i<n ; i++)
        {
            cin>>x;
            f[x]++;
        }
        for (i=1,j=0; i<=100 ; i++)
        {
            if(f[i]>=1)
            {
                a[j]=i;
                j++;
            }

        }
        if(j==1)
            cout<<"YES"<<endl;
        else
        {
            for (i=0; i<j-1 ; i++)
            {
                if(abs(a[i]-a[i+1])!=1)

                {
                    flag=1;
                    break;
                }
            }
            if(flag)
            {
               cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;
        }

    }
}


