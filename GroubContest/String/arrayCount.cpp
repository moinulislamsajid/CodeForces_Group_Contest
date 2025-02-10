#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);
    vector<int> freq(101,0); // size + initial the array
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        freq[v[i]]++;

    }

    for(int i=0; i<n; i++)
    {
        if(freq[i]>0)
        {
            cout<<i<<" -> : "<<freq[i]<<endl;

        }
    }
}
