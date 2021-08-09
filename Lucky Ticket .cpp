

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0;
    int sum1=0,sum2=0;
    string s;
    cin>>n>>s;

    for(i=0 ; i<n ; i++)
    {
        if(s[i]=='4' || s[i]=='7')
            j++;
    }
  //  cout<<"j:"<<j<<endl;
    if(n==j)
    {
        for(i=0 ; i<n ; i++)
        {
            if(i<n/2)
                sum1+=(s[i])-48;
            else if(i>= n/2)
                sum2+=(s[i])-48;
            }
            if(sum1==sum2) cout<<"YES"<<endl;
            else            cout<<"NO"<<endl;
    }
    else            cout<<"NO"<<endl;


}
