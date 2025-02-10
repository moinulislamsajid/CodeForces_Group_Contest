#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        if(n==1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<n*2-1<<endl;
        }
    }
}
