#include<iostream>
using namespace std;
int main()
{
    string s;
    int i,cnt=0,length;
    cin>>s;
    length=s.length();
    for(i=0 ;i<length ;i++)
    {
        if(s[i]=='a')  cnt++;
    }
    if(cnt<=length/2)   cout<<cnt+cnt-1<<endl;
    else                cout<<length<<endl;
    return 0;
}
