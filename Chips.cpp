
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,x,cnt=0;
    cin>>n>>m;

    for(i=1 ; ; i++)
    {
       if(i>m)
        {
            cout<<m<<endl;
            break;
        }
       m=m-i;
       if(i==n) i=0;
    }
}
