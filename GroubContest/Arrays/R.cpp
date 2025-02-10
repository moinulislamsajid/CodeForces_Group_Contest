#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    cin>>n;

    vector<int> v,v1;

    int mx = 0;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mx = max(mx,a[i]);
    }

    vector<int> b(n);
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
        mx = max(mx,b[i]);
    }

    v.resize(mx+1,0);
    v1.resize(mx+1,0);


    for(int i=0; i<n; i++)
    {
       v[a[i]]++;
       v1[b[i]]++;
    }



    if(v==v1)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }


}
