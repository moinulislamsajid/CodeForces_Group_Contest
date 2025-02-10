#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    deque<ll> d(n);

    for(int i=0; i<n; i++)
    {
        cin>>d[i];
    }

    if(n%2==0)
    {
        for(int i=0; i<n/2; i++)
        {
            cout<<d.front()<<" ";
            cout<<d.back()<<" ";
            d.pop_front();
            d.pop_back();
        }
    }
    else
    {
        for(int i=0; i<n/2; i++)
        {
            cout<<d.front()<<" ";
            cout<<d.back()<<" ";
            d.pop_front();
            d.pop_back();
        }

        cout<<d.front()<<" ";
    }






}
