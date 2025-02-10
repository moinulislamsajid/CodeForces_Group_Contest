#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    ll n,k,a;
    cin>>n>>k>>a;

    ll res = (n*k);

    if(res%a!=0)
    {
        cout<<"double"<<endl;
    }
    else
    {
        ll p = res/a;

        if(p>=INT_MIN && p<=INT_MAX)
        {
            cout<<"int"<<endl;
        }
        else
        {
            cout<<"long long"<<endl;
        }
    }





}
