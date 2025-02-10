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

    ll key;
    cin>>key;

    ll in;
    bool found = false;
    for(int i=0; i<n; i++)
    {
        if(v[i]==key)
        {
            in=i;
            found=true;
            break;
        }
    }

    if(found==true)
    {
        cout<<in<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}
