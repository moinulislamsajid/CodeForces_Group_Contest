#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;

    vector<ll> v(n);
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }

    cout<<abs(sum)<<endl;
}
