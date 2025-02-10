#include<bits/stdc++.h>
using namespace std;

int main()
{
    int days;
    cin>>days;

    int y = days/365;
    int rem = days%365;
    int m = rem/30;
    int d = rem%30;
    cout<<y<<" years"<<endl;
    cout<<m<<" months"<<endl;
    cout<<d<<" days"<<endl;

}
