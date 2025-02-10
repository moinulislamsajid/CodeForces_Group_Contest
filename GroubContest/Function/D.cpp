#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool solve(ll n)
{

    if(n<=1)
    {
        return false;
    }

    if(n==2)
    {
        return true;
    }

    if(n%2==0)
    {
        return false;
    }

    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
        {
            return false;
        }
    }


 return true;


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        if(solve(n))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}
