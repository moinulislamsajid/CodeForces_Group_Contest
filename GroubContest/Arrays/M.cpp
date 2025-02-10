#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }



    int mx = INT_MIN;
    int mn = INT_MAX;

    int mxin = 0,mnin=0;

    for(int i=0; i<n; i++)
    {
        if(v[i] > mx)
        {
            mx = v[i];
            mxin=i;
        }
        if(v[i]<mn)
        {
            mn = v[i];
            mnin=i;
        }
    }

    swap(v[mxin],v[mnin]);

    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;
}
