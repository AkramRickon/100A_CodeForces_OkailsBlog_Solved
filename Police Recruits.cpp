
#include<iostream>
using namespace std;
int main()
{
    int n,x,p,ans;
    cin>>n;
    p=ans=0;
    while(n--)
    {
        cin>>x;
        if(x==-1)
        {
            if(p!=0)
                p=p-1;
            else
                ans++;
        }
        else
            p=p+x;
    }
    cout<<ans<<endl;
    return 0;
}
