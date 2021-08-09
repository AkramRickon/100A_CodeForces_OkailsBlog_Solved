#include<iostream>
using namespace std;
int main()
{
    int s,d,i,j,n;
    s=d=0;
    cin>>n;
    int a[n];
    for(i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }

    i=0;
    j=n-1;
    for(int mov=1; mov<=n ;mov++)
    {
        if(mov%2==1)
        {
            if(a[i]>a[j])
            {
                s+=a[i];
                i++;
            }
            else
            {
                s+=a[j];
                j--;
            }
        }
        else
        {
            if(a[i]>a[j])
            {
                d+=a[i];
                i++;
            }
            else
            {
                d+=a[j];
                j--;
            }
        }

    }
    cout<<s<<" "<<d;

    return 0;
}
