#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin>>ch;

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(int in : v)
    {
        for(int i=0; i<in; i++)
        {
            cout<<ch;
        }
        cout<<endl;
    }


}
