#include<iostream>
using namespace std;
int main()
{
    string s;
    int i,j;
    cin>>s;
    if(s.length()==1)
        cout<<s<<endl;
    else
    {
        for(i=0 ; i<s.length()-2 ; i+=2)
        {
            char temp;
            for(j=i+2; j<s.length() ; j+=2)
            {
                if(s[i]>s[j])
                {
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
