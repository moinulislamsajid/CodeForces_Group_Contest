#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;


    while(cin>>a>>b)
    {
        if(a<=0 || b<=0)
        {
            break;
        }
        else
        {
            int sum=0;
            if(a<b)
            {
                for(int i=a; i<=b; i++)
                {
                    sum+=i;
                    cout<<i<<" ";

                }
                cout<<"sum ="<<sum<<endl;

            }
            else
            {
                for(int i=b; i<=a; i++)
                {
                    sum+=i;
                    cout<<i<<" ";
                }
                cout<<"sum ="<<sum<<endl;

            }
        }


    }
}
