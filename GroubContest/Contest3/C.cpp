#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    ll n,k;
    cin>>n>>k;

    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    sort(v.rbegin(),v.rend());

    ll sum=0;

    ll mx = INT_MIN;
    for(int i=0; i<k; i++)
    {
        sum+=v[i];

        mx= max(mx,sum);

    }

    if(mx<0)
    {
        cout<<0<<endl;
    }else
    {
        cout<<mx<<endl;
    }
}
