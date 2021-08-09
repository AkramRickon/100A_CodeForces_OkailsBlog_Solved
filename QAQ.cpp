
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,length,cnt=0;
    string s;
    cin>>s;
    length=s.length();
    for(i=0; i<length ;i++)
    {
        if(s[i]=='Q')
        {
            for(j=i+1 ;j<length ;j++)
            {
                if(s[j]=='A')
                {
                    for(k=j+1 ;k<length ;k++)
                    {
                        if(s[k]=='Q') cnt++;
                    }
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
