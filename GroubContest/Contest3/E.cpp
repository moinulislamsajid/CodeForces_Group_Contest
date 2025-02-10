#include<bits/stdc++.h>
using namespace std;

int min_Operation(vector<int>&v,int n,int sign)
{
    int mn=0;
    int op = sign;

    for(int i=0; i<n; i++)
    {
        if((v[i]>0 && op<0) || (v[i]<0 && op>0))
        {
            mn++;
        }
        op*=-1;
    }

    return mn;


}

int main()
{

    int n;
    cin>>n;

    vector<int> v(n);


    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }


    cout<<min(min_Operation(v,n,1),min_Operation(v,n,-1))<<endl;
}
