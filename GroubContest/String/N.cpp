#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;


    int cnt=0;
    int mx = INT_MIN;

    for(int i=1; i<=s.size(); i++)
    {
        if(s[i]!=s[i-1])
        {
            cnt++;
        }
        mx = max(mx,cnt);
    }

    cout<<mx<<endl;
}
