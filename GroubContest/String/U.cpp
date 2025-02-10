#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int ecnt=0,gcnt=0,ycnt=0,pcnt=0,tcnt=0;

    for(char ch : s)
    {
        if(ch=='E' || ch=='e')
        {
            ecnt++;
        }
        else if(ch=='G' || ch=='g')
        {
            gcnt++;

        }
        else if(ch=='P' || ch=='p')
        {
            pcnt++;
        }
        else if(ch=='T' || ch=='t')
        {
            tcnt++;
        }
        else if(ch=='Y' || ch=='y')
        {
            ycnt++;
        }


    }

   //  cout<<ecnt<<" "<<gcnt<<" "<<pcnt<<" "<<tcnt<<" "<<ycnt<<" "<<endl;

    int mn = min(ecnt,gcnt);
    int mn1 = min(mn,pcnt);
    int mn2 = min(mn1,tcnt);
    int mn3 = min(mn2,ycnt);

    cout<<mn3<<endl;
}
