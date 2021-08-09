




#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,p=0;
   cin>>t;
   while(t--)
   {
       p++;
       int a,b,ans;
       cin>>a>>b;
       if(a>b)
       {
           ans=((a-b+a)*4)+19;
       }
       else
        {
            ans=b*4+19;
        }
       cout<<"Case "<<p<<": "<<ans<<endl;
   }


}

