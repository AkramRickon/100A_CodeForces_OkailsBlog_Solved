#include<iostream>
using namespace std;
int main()
{
    int w1,h1,w2,h2,weight,height,ans;
    cin>>w1>>h1>>w2>>h2;
    weight=(w1>w2?w1:w2);
    weight=weight*2;
    height=(h1+h2)*2;
    ans=weight+height+4;
    cout<<ans<<endl;
    return 0;
}
