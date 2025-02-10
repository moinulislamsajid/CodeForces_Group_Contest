#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        vector<ll> res;

        ll sum = n*(n+1)/2;
        // cout<<sum<<endl;

        if(k>sum)
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            ll current_sum=0;

            for(int i=n; i>=i; i--)
            {
                if(current_sum+i<=k)
                {
                    current_sum+=i;
                    res.push_back(i);
                }
                if(current_sum==k)
                {
                    break;
                }
            }

            if(current_sum!=k)
            {
                cout<<-1<<endl;
            }
            else
            {
                for(ll p : res)
                {
                    cout<<p<<" ";
                }
                cout<<endl;
            }

        }
    }
}
