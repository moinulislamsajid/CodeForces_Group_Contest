#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin>>s;

    int freq[26] = {0};

    for(char ch : s)
    {
        freq[ch-'a']++;
    }

    for(char i='a'; i<='z'; i++)
    {
        if(freq[i-'a']>0)
        {
            cout<<i<<" : "<<freq[i-'a']<<endl;
        }
    }

}
