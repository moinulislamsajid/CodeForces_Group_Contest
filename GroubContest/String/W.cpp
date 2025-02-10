#include<bits/stdc++.h>
using namespace std;

int main()
{
    string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    // cout<<Key.length()<<endl;
    // cout<<Original.length()<<endl;

    int n;
    cin>>n;

    string s;
    cin>>s;
    string ans="";

    if(n==1)
    {
        for(char ch : s)
        {
            int in = Original.find(ch);
            ans.push_back(Key[in]);
        }

    }
    else
    {
        for(char ch : s)
        {
            int in = Key.find(ch);
            ans.push_back(Original[in]);
        }

    }

    for(char ch: ans)
    {
        cout<<ch;
    }

    cout<<endl;

}
