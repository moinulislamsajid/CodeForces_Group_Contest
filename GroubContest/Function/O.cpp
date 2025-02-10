#include<bits/stdc++.h>
using namespace std;

int findDivasor(int n)
{
    int cnt =0;

    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            cnt++;
            if(i!=n/i)
            {
                cnt++;
            }
        }
    }

    return cnt;
}

int maxElement(vector<int>&v,int n)
{
    int mx = *max_element(v.begin(),v.end());

    return mx;
}


int minElement(vector<int>&v,int n)
{
    int mn = *min_element(v.begin(),v.end());

    return mn;
}


bool  primeFind(int n)
{


    if(n<=1)
    {
        return false;
    }
    if(n==2)
    {
        return true;
    }

    if(n%2==0)
    {
        return false;
    }

    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
        {
            return false;
        }
    }

    return true;


}




bool palindrome(int n)
{
    int sum=0,temp,rem;
    temp = n;

    while(temp>0)
    {
        rem = temp%10;
        sum = sum*10+rem;
        temp/=10;
    }

    return sum==n;
}

int main()
{

    int n;
    cin>>n;
    int pcnt=0,priCount=0;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(int i=0; i<n; i++)
    {
        if(palindrome(v[i]))
        {
            pcnt++;
        }
    }

    //cout<<pcnt<<endl;
    // cout<<priCount<<endl;
    // priCount = primeFind(v,n);
    // cout<<priCount<<endl;


    for(int i=0; i<n; i++)
    {
        if(primeFind(v[i]))
        {
            priCount++;
        }
    }



    // cout<<priCount<<endl;

    int bestdiv=0,maxres=-1;

    for(int i=0; i<n; i++)
    {
        int num = findDivasor(v[i]);

        if(num>bestdiv)
        {
            bestdiv = num;
            maxres = v[i];
        }
        else if(num==bestdiv)
        {
            maxres = max(maxres,v[i]);
        }

    }

   //  cout<<maxres<<endl;


   int mx = maxElement(v,n);
   int mn = minElement(v,n);


   cout<<"The maximum number : "<<mx<<endl;
   cout<<"The minimum number : "<<mn<<endl;
   cout<<"The number of prime numbers : "<<priCount<<endl;
   cout<<"The number of palindrome numbers : "<<pcnt<<endl;
   cout<<"The number that has the maximum number of divisors : "<<maxres<<endl;

}
