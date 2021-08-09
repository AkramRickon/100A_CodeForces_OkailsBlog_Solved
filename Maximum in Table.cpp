#include<iostream>
using namespace std;
int main()
{
    int n,j,i,mx;
    cin>>n;
    int a[n][n];
    mx=-1;
    for(i=0 ;i<n ;i++)
    {
        for(j=0 ;j<n ;j++)
        {
            if(i==0 || j==0) a[i][j]=1;
            else
            {
                a[i][j]=a[i-1][j]+a[i][j-1];
            }
            if(mx<a[i][j])
            {
                mx=a[i][j];
            }
        }
    }
    cout<<mx<<endl;
    return 0;
}
