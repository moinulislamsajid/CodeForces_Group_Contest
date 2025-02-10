#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    int i=0;

    while(true)
    {
        if(s1[i]=='\0' && s2[i]=='\0')
        {
            cout<<"Same!"<<endl;
            break;
        }
        else if(s1[i]=='\0')
        {
            cout<<"s1 string is small"<<endl;
            break;
        }
        else if(s2[i]=='\0')
        {
            cout<<"s2 string is small"<<endl;
            break;
        }
        if(s1[i]==s2[i])
        {
            i++;
        }
        else if(s1[i]<s2[i])
        {
            cout<<"s1 is small"<<endl;
            break;
        }
        else
        {
            cout<<"s2 is small"<<endl;
            break;
        }
    }
}
