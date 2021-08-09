
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,cnt1,cnt2,ans=0;
    cin>>n;
    string s[n];
    for(i=0 ; i<n ; i++)
    {
        cin>>s[i];
    }
    for(i=0 ; i<n ; i++)
    {
        cnt1=cnt2=0;
        for(j=0 ; j<n ; j++)
        {
            if(s[i][j]=='C')
            {
                cnt1++;
            }
            if(s[j][i]=='C')
            {
                cnt2++;
            }
        }
        ans+=cnt1*(cnt1-1)/2;
        ans+=cnt2*(cnt2-1)/2;
    }
    cout<<ans<<endl;

    return 0;
}
