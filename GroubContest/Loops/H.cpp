#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int cnt=0;

    if(n<=1)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
           cnt++;
        }
    }

    if(cnt>2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
