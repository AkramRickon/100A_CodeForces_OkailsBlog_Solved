
#include<iostream>
using namespace std;
int main()
{
    int floor,flat,i,j,cnt=0;
    cin>>floor>>flat;
    cin.ignore();
    string s[floor];

    for(i=0 ;i<floor; i++)
    {
        getline(cin,s[i]);
    }

    for(i=0 ;i<floor; i++)
    {
        for(j=0 ;j<s[i].size() ;j+=4)
        {
            if(s[i][j]=='1' || s[i][j+2]=='1')
            {
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
