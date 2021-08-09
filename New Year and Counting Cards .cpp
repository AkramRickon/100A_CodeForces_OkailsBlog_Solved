#include<iostream>
using namespace std;
int main()
{
    string s;
    int i,x,cnt=0;
    cin>>s;
    for(i=0 ;i<s.size();i++)
    {
        if(s[i]=='a' ||s[i]=='e' || s[i]=='i'|| s[i]=='o' ||s[i]=='u') cnt++;
        else if( s[i]=='1'|| s[i]=='3' ||s[i]=='5'|| s[i]=='7'||s[i]=='9') cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
