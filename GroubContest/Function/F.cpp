#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll x,ll y)
{


    ll sum=0;

    for(int i=2; i<=y; i+=2)
    {
        sum+=pow(x,i);
    }

    cout<<sum<<endl;
}

int main()
{

    ll x,y;
    cin>>x>>y;

    solve(x,y);

}
