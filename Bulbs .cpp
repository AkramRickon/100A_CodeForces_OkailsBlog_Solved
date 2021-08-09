#include<iostream>
using namespace std;

int frequency[101];
int main()
{
    int bulb,button,i,j;

    cin>>button>>bulb;
    while(button--)
    {
        int x;
        cin>>x;
        for(i=1 ; i<=x ; i++)
        {
            int y;
            cin>>y;
            frequency[y]++;
        }
    }
    for(i=1 ; i<=bulb ; i++)
    {
        if(frequency[i]==0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
