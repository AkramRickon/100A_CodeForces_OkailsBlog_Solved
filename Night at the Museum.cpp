
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int i,diff,rotation=0;
    string s;
    cin>>s;
    char flag='a';

    for(i=0 ;i<s.size() ;i++)
    {
        diff=abs(s[i]-flag);
        cout<<"diff "<<diff<<endl;
        if(diff>13)
        {
            rotation+=26-diff;
        }
        else
        {
            rotation+=diff;
        }
        flag=s[i];
    }
    cout<<rotation<<endl;
    return 0;
}
