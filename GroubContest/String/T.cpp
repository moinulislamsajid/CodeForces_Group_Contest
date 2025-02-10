#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int qsym = s.find('?');

    // cout<<qsym<<endl;

     if (qsym == string::npos)
     {
         return 1;
     }

     string subafter = s.substr(qsym+1);

     // cout<<subafter<<endl;

     string parameter[] = {"username","pwd","profile","role","key"};


     for(const string &key : parameter)
     {
         int start = subafter.find(key+"=")+key.length()+1;
         int en = subafter.find('&',start);
         cout<<key<<": "<<subafter.substr(start,en-start)<<endl;
     }

}
