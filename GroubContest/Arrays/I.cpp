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

    int sum=0;
    int mn = INT_MAX;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
           sum = v[i]+v[j]+j-i;
           mn = min(mn,sum);

        }


    }

    cout<<mn<<endl;
}
