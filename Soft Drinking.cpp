
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    int drink,lime,salt;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    drink=k*l/nl;
    lime=c*d;
    salt=p/np;

    cout<<min(drink, min(salt,lime))/n;

  //cout<<min(5,min(2,3));


}
