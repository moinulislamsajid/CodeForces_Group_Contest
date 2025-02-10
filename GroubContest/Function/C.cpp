#include<bits/stdc++.h>
#define ll long long int
using  namespace std;

string decimal_binary(ll num)
{

    string bin = "";

    while(num>0)
    {
        ll rem = num%2;
        bin.push_back('0'+rem);
        num = num/2;
    }
    reverse(bin.begin(),bin.end());

    return bin;
}

void solve(ll num)
{

    if(num%2!=1)
    {
        cout<<"NO"<<endl;
        return;

    }

    // called to the function

    string binary = decimal_binary(num);

    string bin = binary;

    reverse(binary.begin(),binary.end());

    if(binary==bin)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

int main()
{

    ll n;
    cin>>n;

   solve(n);

}
