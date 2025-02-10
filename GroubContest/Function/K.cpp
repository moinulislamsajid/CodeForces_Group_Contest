#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&v,int n,int k)
{
    k=k%n;
    rotate(v.begin(),v.end()-k,v.end());

    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;
}

int main()
{
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    solve(v,n,k);
}
