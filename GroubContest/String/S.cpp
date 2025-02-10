#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin>>s;

    string ans="";
    int Lcnt=0,Rcnt=0,tP=0;

    queue<int> q;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='L')
        {
            Lcnt++;
            ans.push_back(s[i]);
        }
        else if(s[i]=='R')
        {
            Rcnt++;
            ans.push_back(s[i]);

        }

        if(Lcnt==Rcnt)
        {
            tP++;
            q.push(i);

        }
    }

   cout<<tP<<endl;

   int cnt = 0;

   while(!q.empty())
   {
       int en = q.front();
       q.pop();
       for(int i=cnt; i<=en; i++)
       {
           cout<<ans[i];
       }
       cout<<endl;

       cnt=en+1;
   }





}
