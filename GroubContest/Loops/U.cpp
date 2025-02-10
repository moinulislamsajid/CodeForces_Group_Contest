#include<bits/stdc++.h>
using namespace std;

int digitsum(int num)
{
    int sum=0;

    while(num>0)
    {
        sum+=num%10;
        num/=10;
    }

    return sum;
}

int main()
{
    int N,b,c;
    cin>>N>>b>>c;

    int tsum=0;
    for(int i=1; i<=N; i++)
    {
        int ds = digitsum(i);

        if(ds>=b && ds<=c)
        {
            tsum+=i;
        }
    }


    cout<<tsum<<endl;
}
