#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        ll i=0;

        ll num[100000];

        while(n>0)
        {

            num[i] = n%2;
            n/=2;
            i++;
        }

        ll one=0;

        vector<ll> v;
        for(ll j=i-1; j>=0; j--)
        {
            if(num[j]==1)
            {
                one++;
                v.push_back(num[j]);
            }
        }



        ll des=0;
        for(ll k=0; k<one; k++)
        {
            des += v[k] * (1 << (one - k -1));


        }

        cout<<des<<endl;

    }

}
