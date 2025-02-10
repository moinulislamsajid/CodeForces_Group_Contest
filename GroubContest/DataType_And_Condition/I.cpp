#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    if(n==10 || n==20 || n==30 || n==40 || n==50 || n==60 || n==70 || n==80 || n==90)
    {
        cout<<"YES"<<endl;
        return 0;
    }

    int f = n/10;
    int s = n%10;


    if(f%s==0 || s%f==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }





}
