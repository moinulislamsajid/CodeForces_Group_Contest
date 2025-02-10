#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;



        vector<int> v(n);

        int evCnt=0,odCnt=0;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]%2==0)
            {
                evCnt++;
            }
            else
            {
                odCnt++;
            }
        }

        if(n%2==1)
        {
            cout<<-1<<endl;
            continue;
        }

            cout<<abs(evCnt-odCnt)/2<<endl;
        }


    }

