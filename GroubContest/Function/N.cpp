#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    vector<int> other;
    vector<int> zeros;

    for(int i=0; i<n; i++)
    {
        if(v[i]==0)
        {
            zeros.push_back(0);
        }
        else
        {
            other.push_back(v[i]);
        }

    }

    for(int i=0; i<other.size(); i++)
    {
        cout<<other[i]<<" ";
    }
    for(int i=0; i<zeros.size(); i++)
    {
        cout<<0<<" ";
    }
    cout<<endl;


}

int main()
{

    solve();


}
