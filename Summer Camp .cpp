#include<iostream>
using namespace std;
int main()
{
    int n,i,j,x,y;
    string s;
    cin>>n;
    for(i=1; i<=1000; i++)
    {
        string t;
        x=i;
        while(x!=0)
        {
            t=char(x%10+'0')+t;
            x=x/10;
        }
        s+=t;
    }
    cout<<s[n-1];
    return 0;
}
