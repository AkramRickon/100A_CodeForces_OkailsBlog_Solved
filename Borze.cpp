
#include <iostream>
using namespace std;
int main()
{
    int n,i,cnt=0;
    string s;
    cin>>s;
    for(i=0 ;i<s.size() ;i++)
    {
        if(s[i]=='.')
        {
            cout<<0;
        }
        else if(s[i]=='-' && s[i+1]=='.')
        {
            cout<<1;
            i++;
        }
        else
        {
            cout<<2;
            i++;
        }
    }
    return 0;
}
