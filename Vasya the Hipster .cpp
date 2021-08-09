#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int x,y,ans1,ans2;
    cin>>x>>y;
    ans1=min(x,y);
    ans2=(max(x,y)-min(x,y))/2;
    cout<<ans1<<" "<<ans2<<endl;
    return 0;
}
