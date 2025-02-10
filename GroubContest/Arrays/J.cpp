#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int mn = *min_element(v.begin(),v.end());


    int cnt=0;
n
    for(int i=0; i<n; i++)
    {
        if(v[i]==mn)
        {
            cnt++;
        }
    }

    if(cnt%2!=0)
    {
        cout<<"Lucky"<<endl;
    }
    else
    {
        cout<<"Unlucky"<<endl;
    }


}
