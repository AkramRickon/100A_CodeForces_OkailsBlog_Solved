
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    long long int ans1=a[0]*2+a[1]*2;
    long long int ans2=a[0]+a[1]+a[2];

    cout<<min(ans1,ans2);

    return 0;
}
