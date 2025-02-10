#include<bits/stdc++.h>
using namespace std;

int main()
{


    string s;
    cin>>s;
    int cnt=0;
    string change = " ";
    for(int i=0; i<s.size(); i++)
    {
        string sub = s.substr(i,5);

        if(sub=="EGYPT")
        {

            s.replace(i,sub.length(),change);

        }
    }

    cout<<s<<endl;
}
