
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int n,d,cnt=0,i,j;
   cin>>n>>d;
   int a[n];
   for(i=0; i<n ;i++)
   {
       cin>>a[i];
   }
   sort(a,a+n);
   for(i=0; i<n-1 ;i++)
   {
       for(j=i+1; j<n ;j++)
       {
           if(a[j]-a[i]<=d)
           {
               cnt++;
           }
       }
   }
   cout<<cnt*2<<endl;
}
