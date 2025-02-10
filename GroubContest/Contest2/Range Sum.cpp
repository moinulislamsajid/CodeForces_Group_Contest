#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll l,r;
        cin>>l>>r;

        ll m = max(l,r);
        ll mn = min(l,r);
        mn--;
        ll fr = m*(m+1)/2;
        ll lr = mn*(mn+1)/2;

        cout<<fr-lr<<endl;

    }
}
