#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;

    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }


    ll mx = 0;
    for(ll hh : v)
    {
        ll ecnt=0;
        while(hh%2==0)
        {
            ecnt++;
            hh/=2;

        }
         mx = max(mx,ecnt);
    }

    cout<<mx<<endl;
}
