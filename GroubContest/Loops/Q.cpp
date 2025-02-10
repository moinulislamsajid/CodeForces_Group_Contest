#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int n;
        cin>>n;

        if(n==0)
        {
            cout<<0<<endl;

        }
        else
        {
            while(n>0)
            {
                long long int last = n%10;
                cout<<last<<" ";
                n/=10;

            }
            cout<<endl;
        }


    }
}
