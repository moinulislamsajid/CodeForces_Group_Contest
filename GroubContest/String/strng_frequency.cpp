#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    vector<int> freq(101,0) ;// size + initial

    for(char ch : s)
    {
        if(ch>='a' && ch<='z')
        {
            freq[ch-'a']++;

        }

    }

    for(char i='a'; i<='z'; i++)




            if(freq[i-'a'])
            {
                cout<<i<<" : "<<freq[i-'a']<<endl;

            }

    }



