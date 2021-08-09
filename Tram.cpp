

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,capacity=0,temp=0;
    cin>>n;

    for(i=0; i<n ; i++)
    {
        cin>>a>>b;
        temp-=a;
        temp+=b;
        if(temp>capacity) capacity=temp;
    }
    cout<<capacity<<endl;
}
