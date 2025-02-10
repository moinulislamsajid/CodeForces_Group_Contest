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

        ll fact = 1;

        for(ll i=1; i<=n; i++)
        {
            fact = fact*i;
        }

        cout<<fact<<endl;
    }
}
