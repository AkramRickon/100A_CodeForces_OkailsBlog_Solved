
#include<iostream>
using namespace std;
int main()
{
    int n,x,y,left=0,right=0;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        if(x>0) right++;
        else    left++;
    }
    if(right>0 && left==0)  cout<<"Yes"<<endl;
    else if (left>0 && right==0)    cout<<"Yes"<<endl;
    else if( left==1 || right==1)   cout<<"Yes"<<endl;
    else                            cout<<"No"<<endl;
    return 0;
}
