#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    vector<int> a(n);
    vector<int> b(m);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }

    int i=0,j=0;

    while(i<n && j<m)
    {
        if(a[i]==b[j])
        {
            j++;
        }

        i++;
    }

    if(j==m)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
