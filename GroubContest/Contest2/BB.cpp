#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        if(n>2)
        {
            if(n%4!=0)
            {
                int v = n-2;
                cout<<(v/4)+1<<endl;
            }
            else
            {
                cout<<(n/4)<<endl;
            }
        }
        else
        {
            cout<<1<<endl;
        }
    }
}
