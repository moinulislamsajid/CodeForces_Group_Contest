#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        int n = s.size();

        bool flag = false;

        for(int i=0; i<n; i++)
        {
            string sub = s.substr(i,3);

            if(sub=="010" || sub=="101")
            {
                flag = true;
                break;
            }
        }

        if(flag)
        {
            cout<<"Good"<<endl;
        }
        else
        {
            cout<<"Bad"<<endl;
        }
    }
}
