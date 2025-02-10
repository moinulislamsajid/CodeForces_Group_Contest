#include<bits/stdc++.h>
using namespace std;

bool luckeyNumber(int n)
{

    while(n>0)
    {
        int last = n%10;

        if(last!=4 && last!=7)
        {
            return false;
        }

        n/=10;
    }

    return true;
}

int main()
{
    int a,b;
    cin>>a>>b;


    vector<int> v;

    for(int i=a; i<=b; i++)
    {
        if(luckeyNumber(i))
        {
            v.push_back(i);
        }
    }

    if(v.empty())
    {
        cout<<-1<<endl;
    }
    else
    {
        for(int in : v)
        {
            cout<<in<<" ";
        }

        cout<<endl;
    }
}
