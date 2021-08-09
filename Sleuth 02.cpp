
#include<iostream>
using namespace std;
int main()
{
    int i;
    char ch;
    string s;
    getline(cin,s);
    for(i=s.size()-1; i>=0 ; i--)
    {
        if(s[i]==' ' || s[i]=='?')
        {
            continue;
        }
        else
        {
            ch=s[i];
            break;
        }
    }
    if(ch>='A' && ch<='Z')
    {
        ch=char(ch+32);
    }
    if(ch=='a' || ch=='e'|| ch=='i' ||ch=='o' || ch=='o' || ch=='u' || ch=='y')
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
