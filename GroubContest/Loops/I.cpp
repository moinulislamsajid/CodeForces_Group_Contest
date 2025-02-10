#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int temp,rem,sum=0;

    temp = n;

    while(temp>0)
    {
        rem = temp%10;
        sum = sum*10+rem;
        temp = temp/10;
    }

    if(sum==n)
    {
        cout<<sum<<endl;
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<sum<<endl;
        cout<<"NO"<<endl;
    }
}
