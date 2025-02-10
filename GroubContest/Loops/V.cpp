#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int c=1;

    for(int i=1; i<=n; i++)
    {
        cout<<c<<" "<<c+1<<" "<<c+2<<" PUM"<<endl;
        c+=4;
    }
}
