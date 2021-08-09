
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,cnt,block;
    string s;
    cin>>n>>s;
    int a[n];
    block=j=0;
    for(i=0 ;i<n ;i++)
    {
        cnt=0;
        if(s[i]=='B')
        {
            block++;
            while(s[i]=='B')
            {
                i++;
                cnt++;
            }
            i--;
            a[j]=cnt;
            j++;
        }
    }
    cout<<block<<endl;
    for(i=0 ;i<block ;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
