

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    set<char> p;
    cin>>s;

    for(int i=0; i<s.size() ;i++)
    {
        p.insert(s[i]);
    }
  //  cout<<p.size();

  if(p.size()%2==0) cout<<"CHAT WITH HER!"<<endl;
  else cout<<"IGNORE HIM!"<<endl;

}
