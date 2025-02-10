#include<bits/stdc++.h>
using namespace std;

int main()
{

    int tt;
    cin>>tt;

    while(tt--)
    {
        string s,t;
        cin>>s>>t;

        int sz = s.size();
        int st = t.size();

        string ans="";

        for(int i=0; i<max(sz,st); i++)
        {
            if(i<sz)
            {
                ans.push_back(s[i]);

            }
            if(i<st)
            {
                ans.push_back(t[i]);
            }

        }

        for(char ch : ans)
        {
            cout<<ch;
        }

        cout<<endl;
    }
}
