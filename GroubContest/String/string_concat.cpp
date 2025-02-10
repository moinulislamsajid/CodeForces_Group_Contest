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

        vector<ll> v(n);
        vector<ll> v1(n);
        map<int,int> n1,n2;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            n1[v[i]]++;

        }

        for(int i=0; i<n; i++)
        {
            cin>>v1[i];
            n2[v1[i]]++;

        }

        if(n1.size()+n2.size()>3)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
