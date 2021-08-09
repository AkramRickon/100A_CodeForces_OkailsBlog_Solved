
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    int sum=0;
    int mr=(n-1)/2;
    int mc=(n-1)/2;


     for(int i=0 ;i<n ;i++)
    {
        for(int j=0; j<n ;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0 ;i<n ;i++)
    {
        for(int j=0; j<n ;j++)
        {
            if(i==j || i+j==n-1 || mc==j || mr==i )
            {
                sum+=a[i][j];
            }
        }
    }

    cout<<sum<<endl;
}
