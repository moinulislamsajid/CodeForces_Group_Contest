#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of arrays "<<endl;
    cin>>n;

    int num[n];
    for(int i=0; i<n; i++)
    {
        cin>>num[i];
    }

    cout<<"Reverse print : "<<endl;

    for(int i=n-1; i>=0; i--)
    {
        cout<<num[i]<<" ";
    }

    cout<<endl;

    int pos;
    cout<<"Enter any position whenever you delete the value"<<endl;
    cin>>pos;

    if(pos>n)
    {
        cout<<"Enter any position whenever you"<<endl;
    }
    else
    {
        for(int i=pos; i<n-1; i++)
        {
            num[i] = num[i+1];
        }
        n--;

        cout<<"Update Arrays : "<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<num[i]<<" ";
        }
        cout<<endl;
    }
}
