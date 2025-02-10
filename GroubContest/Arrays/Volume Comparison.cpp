#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,x;
    cin>>a>>b>>c>>x;

    int res = a*b*c;
    int cb = pow(x,3);

    if(res>cb)
    {
        cout<<"Cuboid"<<endl;
    }
    else if(res<cb)
    {
        cout<<"Cube"<<endl;
    }
    else
    {
        cout<<"Equal"<<endl;
    }
}
