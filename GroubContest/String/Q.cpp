#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin,s);


    int pre=0,pst=0;


    for(int i=0; i<=s.size(); i++)
    {
        if(s[i+1]==' ' || s[i+1]=='\0')
        {
            pst=i+1;
            reverse(s.begin()+pre,s.begin()+pst);
            pre = pst+1;
        }
    }

    cout<<s<<endl;

}
