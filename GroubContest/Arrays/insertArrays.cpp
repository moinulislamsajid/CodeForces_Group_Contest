#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of arrays : "<<endl;
    cin>>n;

    int num[n+1];

    for(int i=0; i<n; i++)
    {
        cin>>num[i];
    }
    int pos,val;
    cout<<"Enter the position where you insert the value : "<<endl;
    cin>>pos;

    if(pos>n)
    {
        cout<<"Enter any position than required size you have"<<endl;

    }
    else
    {
        cout<<"Enter any value : "<<endl;
        cin>>val;

        for(int i=n; i>pos; i--)
        {
            num[i] = num[i-1];
        }
        num[pos] = val;
        n++;

        cout<<"Update Arrays : "<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<num[i]<<" ";
        }
        cout<<endl;
    }
}
