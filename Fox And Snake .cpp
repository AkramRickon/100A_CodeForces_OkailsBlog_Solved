
#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,even=1;
    cin>>n>>m;
    string s[n];

    for(i=1 ; i<=n ; i++)
    {
        if(i&1)
        {
            for(j=1 ; j<=m ; j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else
        {
            if(even&1)
            {
                for(j=1; j<m ; j++)
                {
                    cout<<".";
                }
                cout<<"#"<<endl;
            }
            else
            {
                cout<<"#";
                for(j=1 ; j<m ; j++)
                {
                    cout<<".";
                }
                cout<<endl;
            }
            even++;
        }
    }

    return 0;
}
