
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,cnt=0;
    cin>>n;
    string s[n];
    for(i=0 ; i<n; i++)
    {
        cin>>s[i];
    }
    for(i=0 ; i<n ; i++)
    {
        for(j=0; j<n ; j++)
        {
            if(s[i][j]=='C')
            {
                for(k=j+1; k<n ; k++)
                {
                    if(s[i][k]=='C')
                    {
                        cnt++;
                    }
                }
                for(k=i+1 ; k<n ; k++)
                {
                    if(s[k][j]=='C')
                    {
                        cnt++;
                    }
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
