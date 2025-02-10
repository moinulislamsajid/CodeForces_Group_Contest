#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;

    long long int raw = n/4;
    long long int col;
    if(raw%2==0)
    {
        col = (n%4);

    }
    else
    {
        col = 3-(n%4);
    }

    cout<<raw<<" "<<col<<endl;
}
