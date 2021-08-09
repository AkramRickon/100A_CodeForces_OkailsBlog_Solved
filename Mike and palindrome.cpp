#include<iostream>
using namespace std;
int main()
{
    int missmatch=0,i;
    string s;
    cin>>s;
    for(i=0 ;i<s.size()/2; i++)
    {
        if(s[i]!=s[s.size()-1-i])
        {
            missmatch++;
        }
    }
    if(missmatch==1 || (missmatch==0 && s.size()%2==1)) cout<<"YES"<<endl;
    else                                                cout<<"NO"<<endl;
    return 0;
}
