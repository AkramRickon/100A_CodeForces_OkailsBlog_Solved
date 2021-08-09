#include<iostream>
using namespace std;
int main()
{
    int  n,m,i,j,cnt=0;
    cin>>n>>m;
    int a[n][m];
    for(i=0 ; i<n ; i++)
    {
        for(j=0; j<m*2 ; j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0 ; i<n ; i++)
    {
        for(j=0; j<m*2 ; j+=2)
        {
            if(a[i][j]==1 || a[i][j+1])
            {
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
