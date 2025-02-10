#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<double> v(n);

    double sum=0;
    for(int i=0;i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];

    }

    double avg = (sum/n);

    cout<<fixed<<setprecision(6)<<avg<<endl;
}

int main()
{
    solve();
}
