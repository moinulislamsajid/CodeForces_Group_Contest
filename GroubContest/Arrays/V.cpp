#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    vector<int> v;

    vector<int> a(n);
    int mx= 0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mx = max(mx,a[i]);
    }

    v.resize(mx+1,0);

    for(int i=0; i<n; i++)
    {
        v[a[i]]++;
    }

    for(int i=1; i<=m; i++)
    {
        if(i<=mx)
        {
             cout<<v[i]<<endl;
        }
        else
        {
            cout<<0<<endl;
        }

    }
}
