#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;


    int h=0,e=0,l=0,o=0,ln=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='h')
        {
            h=i;
        }
        else if(s[i]=='e')
        {
            e=i;
        }
        else if(s[i]=='l')
        {
            l=i;
            ln++;
        }
        else if(s[i]=='o')
        {
            o=i;
        }


    }

    if(e>h && (l>e && ln>2))
    {
        if(o>l)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
