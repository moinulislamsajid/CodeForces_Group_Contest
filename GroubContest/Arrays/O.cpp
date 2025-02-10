#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n==1)
    {
        cout<<0<<endl;
        return 0;
    }
    if(n==2)
    {
        cout<<1<<endl;
        return 0;
    }

    long long int p1 = 0;
    long long int p2 = 1;
    long long int curr;
    for(int i=3; i<=n; i++)
    {
        curr = p1+p2;
        p1=p2;
        p2 = curr;
    }

    cout<<curr<<endl;
}
