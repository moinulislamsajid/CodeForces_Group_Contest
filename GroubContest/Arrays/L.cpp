#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll countSubstr(const vector<ll> &v)
{
    ll cnt=0;
    ll len = 1;

    for(int i=1; i<v.size(); i++)
    {
        if(v[i]>=v[i-1])
        {
            len++;
        }
        else
        {
            cnt+=((len*(len+1))/2);
            len=1;
        }
    }

    cnt+=((len*(len+1))/2);

    return cnt;
}

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

        cout<<countSubstr(v)<<endl;

    }
}
