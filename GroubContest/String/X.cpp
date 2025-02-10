#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s,sub1="",sub2;
    cin>>s;

    string org = s;
    string small = s;

    for(int i=0; i<s.length()-1; i++)
    {
        sub1+=s[i];
        org.erase(0,1);
        sub2 = org;

        sort(sub1.begin(),sub1.end());
        sort(sub2.begin(),sub2.end());

        small = min(small,sub1+sub2);
    }

    cout<<small<<endl;
}
