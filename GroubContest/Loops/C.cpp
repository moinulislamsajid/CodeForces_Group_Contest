#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int num[n];
    int e=0,o=0,ng=0,p=0;

    for(int i=0; i<n; i++)
    {
        cin>>num[i];
    }

    for(int i=0; i<n; i++)
    {
        if(num[i]%2==0)
        {
            e++;
        }
        if(num[i]%2!=0)
        {
            o++;
        }
        if(num[i] > 0)
        {
            p++;
        }
        if(num[i]<0)
        {
            ng++;
        }
    }

    cout<<"Even: "<<e<<endl;
    cout<<"Odd: "<<o<<endl;
    cout<<"Positive: "<<p<<endl;
    cout<<"Negative: "<<ng<<endl;
}
