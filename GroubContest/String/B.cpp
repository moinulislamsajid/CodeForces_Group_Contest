#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);


    for(char ch : s)
    {
        if(ch=='\\')
        {
            break;

        }

        cout<<ch;
    }
}
