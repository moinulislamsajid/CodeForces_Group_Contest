#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;  // happy,NewYear,enjoy

    for(char ch : s)
    {
        if(ch>='a' && ch<='z')
        {
            cout<<(char)toupper(ch);
        }
        else if(ch>='A' && ch<='Z')
        {
            cout<<(char) tolower(ch);
        }
        else if(ch==',')
        {
            cout<<" ";
        }
        else
        {
            cout<<ch;
        }
    }

    cout<<endl;
}
