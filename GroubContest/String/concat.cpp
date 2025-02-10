#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s2;
    cin>>s>>s2;

    int sz = s.size();
    int k=sz+1;
    for(int i=0; i<s2.size(); i++)
    {
        s[k] = s2[i];
        k++;

    }
    cout<<s<<" "<<s2<<endl;

    //strcat(s,s2);
    s.append(s2);

    cout<<s<<endl;

    cout<<s+s2<<endl;

}
