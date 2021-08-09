


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    while(n--)
    {
       int a[3],j=0;
       for(int i=0; i<3 ;i++)
       {
           cin>>a[i];
           if(a[i]==1) j++;
       }
       if(j>=2 && j<=3) count++;

    }
    cout<<count<<endl;
}

