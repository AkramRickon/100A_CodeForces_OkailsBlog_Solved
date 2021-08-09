
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i,block,cnt;
    vector<int> v;
    string s;
    cin>>n>>s;
    block=0;
    for(i=0; i<n ; i++)
    {
        cnt=0;
        if(s[i]=='B')
        {
            block++;
            while(s[i]=='B')
            {
                cnt++;
                i++;
            }
            i--;
            v.push_back(cnt);
        }
    }
    cout<<block<<endl;
    for(i=0 ; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
}
