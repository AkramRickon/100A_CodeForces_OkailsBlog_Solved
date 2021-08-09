#include<iostream>
using namespace std;
int main()
{
    int a[7],page,i,read=0;
    cin>>page;
    for(i=0; i<7 ; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<7 ; i++)
    {
        read+=a[i];
        if(read>=page)
        {
            cout<<i+1<<endl;
            break;
        }
        if(i==6) i=-1;
    }
    return 0;
}
