#include<bits/stdc++.h>
using namespace std;


void rawswap(vector<vector<int>>&num,int x,int y)
{

    swap(num[x],num[y]);
}

void colswap(vector<vector<int>>&num,int x,int y)
{
    int sz = num.size();

    for(int i=0; i<sz; i++)
    {
        swap(num[i][x],num[i][y]);
    }
}
int main()
{
    int n,x,y;
    cin>>n>>x>>y;

   // using 0 base index
   --x;
   --y;

   vector<vector<int>> num(n,vector<int>(n));

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>num[i][j];
        }
    }


    rawswap(num,x,y);
    colswap(num,x,y);

     for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<num[i][j]<<" ";
        }

        cout<<endl;
    }


}
