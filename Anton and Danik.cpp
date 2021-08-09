
#include<iostream>
using namespace std;
int main()
{
    int n,i,A,D;
    string s;
    cin>>n>>s;
    A=D=0;
    for(i=0; i<n ; i++)
    {
        if(s[i]=='A')
            A++;
        else
            D++;
    }
    if(A>D)
    {
        cout<<"Anton"<<endl;
    }
    else if(D>A)
    {
        cout<<"Danik"<<endl;
    }
    else
        cout<<"Friendship"<<endl;
    return 0;
}
