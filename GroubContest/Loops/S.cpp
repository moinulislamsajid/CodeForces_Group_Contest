#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int sum=0;
        if(a<b)
        {
            for(int i=a+1; i<b; i++)
            {
                if(i%2==1)
                {
                    sum+=i;
                }
            }

            cout<<sum<<endl;
        }
        else
        {
            for(int i=b+1; i<a; i++)
            {
                if(i%2==1)
                {
                    sum+=i;
                }
            }

            cout<<sum<<endl;
        }
    }
}
