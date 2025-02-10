#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll cnt = 0;
    while (cnt < n)
    {
        ll m = LLONG_MAX;
        for (ll i = 0; i < k && cnt < n; i++)
        {
            m = min(m, v[cnt]);
            cnt++;
        }
        cout << m << " ";
    }

    return 0;
}
