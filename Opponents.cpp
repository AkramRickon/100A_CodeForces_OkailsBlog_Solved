

#include<iostream>
using namespace std;
int main()
{
    int n,d,i,j,cnt=0,ans=0,flag=0;
    cin>>n>>d;
    string s[d];

    for(i=0 ; i<d ; i++)
    {
        cin>>s[i];
    }

    for(i=0 ; i<d ; i++)
    {
        flag=0;
        for(j=0 ; j<n; j++)
        {
            if(s[i][j]=='0')
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            cnt++;
            ans=max(ans,cnt);
        }
        else
        {
            cnt=0;
        }
    }
    cout<<ans;
}
