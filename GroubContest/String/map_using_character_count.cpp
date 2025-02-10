#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin>>s;

    // using map : map always ascending order print also work with key and value

    map<char,int> mp;

    for(char ch : s)
    {
        mp[ch]++;
    }

    for(pair<char,int> p : mp)
    {
        cout<<p.first<<" : "<<p.second<<endl;
    }
}
