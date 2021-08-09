#include<iostream>
using namespace std;
int main()
{
    int n,before,after;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s>>before>>after;
        if(before>=2400 && after>before)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}