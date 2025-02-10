#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;

    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;

    long long int mul = (a * b * c * d);

    int last_two_digits = mul % 100;

    if (last_two_digits == 0)
    {
        cout << "00" << endl;
    }
    else if (last_two_digits <= 9)
    {
        cout << "0" << last_two_digits << endl;
    }
    else
    {
        cout << last_two_digits << endl;
    }

    return 0;
}
