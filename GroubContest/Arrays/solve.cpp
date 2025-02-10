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



        if(n<4)
        {
            cout<<0<<endl;
            continue;
        }

        int mx = 0;
        int div1 = n/2;
        for(int i=1; i<div1; i++)
        {
            int b = div1-i;
            int l = i*b;
            mx = max(l,mx);
        }

        cout<<mx<<endl;
    }
}
