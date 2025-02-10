#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;

    string digit;
    cin>>digit;

    long long int sum=0;

    for(char ch : digit)
    {
        sum+=(ch-'0');
    }

    cout<<sum<<endl;
}
