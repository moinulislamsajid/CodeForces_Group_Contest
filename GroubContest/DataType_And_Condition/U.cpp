#include<bits/stdc++.h>
using namespace std;

int main()
{
    float x;
    cin>>x;

    if(fabs(x-round(x))<1e-6)
    {
        cout<<"int "<<static_cast<int>(x)<<endl;
    }
    else
    {
        int in = static_cast<int>(x);
        double dec = x - in;
        cout<<"float "<<in<<" "<<fixed<<setprecision(3)<<dec<<endl;
    }

}
