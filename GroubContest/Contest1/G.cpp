#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,m,k;
    cin>>n>>m>>k;



    ll mv1 = min(n,m);
    ll mv = min(mv1,k);






    if(n==mv)
    {
        cout<<n<<endl;
    }
    else if(k==mv)
    {
        cout<<k<<endl;
    }
    else
    {
        ll find_n = n-mv;
        ll find_k = k-mv;

        ll div_n = (find_n/2);

        if(div_n<find_k)
        {
            cout<<div_n+mv<<endl;
        }
        else
        {
            cout<<k<<endl;
        }


    }
}
