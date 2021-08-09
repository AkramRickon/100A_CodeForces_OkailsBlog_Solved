


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s[n];

    for(int i=0 ;i<n ;i++) cin>> s[i];

     int x,y,cnt;

     for(int i=0 ;i<n ;i++)
     {
         cnt=0;
         for(int j=0; j<m; j++)
         {
             if(s[i][j]=='*') cnt++;
         }
         if(cnt==1)
         {
             x=i;
             break;
         }

     }
      for(int i=0 ;i<m ;i++)
     {
         cnt=0;
         for(int j=0; j<n; j++)
         {
             if(s[j][i]=='*') cnt++;
         }
         if(cnt==1)
         {
             y=i;
             break;
         }
     }

     cout<<x+1<<" "<<y+1<<endl;

}


