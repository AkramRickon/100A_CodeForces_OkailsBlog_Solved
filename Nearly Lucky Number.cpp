#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    int cnt1=0,cnt2=0,lucky=0;
    cin>>s;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='4' || s[i]=='7') lucky++;

    }

    if (lucky==4 || lucky==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
