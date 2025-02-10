#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    int cnt=0;
    bool word = false;

    for(char ch : s)
    {
        if(isalpha(ch))
        {
            if(!word)
            {
                cnt++;
                word=true;
            }
        }
        else
        {
            word=false;
        }
    }

    cout<<cnt<<endl;
}
