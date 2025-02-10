#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;

    vector<long long int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }


    long long int op = 0;

    while(true)
    {
        bool aleven = true;
        for(int i=0; i<n; i++)
        {
            if(v[i]%2!=0)
            {
                aleven=false;
                break;
            }
        }

        if(!aleven)
        {
            break;
        }

        for(int i=0; i<n; i++)
        {
            v[i]/=2;
        }
        op++;
    }

    cout<<op<<endl;
}




