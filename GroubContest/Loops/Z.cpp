#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,s;
    cin>>n>>s;

    int cnt=0;

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            int k = s-(i+j);

            if(k>=0 && k<=n)
            {
                cnt++;
            }
        }
    }

    cout<<cnt<<endl;
}
