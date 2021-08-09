
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;
    cin>>n;
    int a[n];



    for(int i=0 ;i<n ;i++)
    {
        cin>>a[i];
    }

    int max_pos=0,min_pos=0;
    int mx=a[0],mn=a[0];

    for(int i=1 ;i<n ;i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
            max_pos=i;
        }
        if(a[i]<=mn)
        {
            mn=a[i];
            min_pos=i;
        }
    }
    ans=max_pos+ ((n-1)-min_pos);
    if(max_pos>min_pos )cout<<ans-1<<endl;
    else                cout<<ans<<endl;
  //  cout<<max_pos<<" "<<min_pos<<endl;
}
