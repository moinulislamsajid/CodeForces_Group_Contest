#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int num[n];
    for(int i=0; i<n; i++)
    {
        cin>>num[i];
    }
    int m = INT_MAX;
    int in;

    for(int i=0; i<n; i++)
    {
        if(num[i]<m)
        {
            m = num[i];
            in=i;
        }
    }

    cout<<m<<" "<<in+1<<endl;
}
