#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        int n,k;
        cin>>n>>k;

        vector<int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        vector<int> ans;

        for(int i=0; i<n; i++)
        {
            if(v[i]<v[i+1])
            {
                ans.push_back(v[i]);
            }
            else
            {
                int mul = v[i+1]*k;
                // cout<<v[i]<<endl;
                if(v[i]<mul)
                {
                    ans.push_back(v[i]);
                    ans.push_back(mul);
                    continue;
                }
            }
        }

        cout<<ans.size()<<endl;

    }
}
