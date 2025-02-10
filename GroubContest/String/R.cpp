#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int sc = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'V')
        {
            sc += 5;
        }
        else if (s[i] == 'W')
        {
            sc += 2;
        }
        else if (s[i] == 'X')
        {
           i++;
        }
        else if (s[i] == 'Y' && i + 1 < s.size())
        {
            s.push_back(s[i + 1]);
            i++;
        }
        else if (s[i] == 'Z' && i + 1 < s.size())
        {
            if (s[i + 1] == 'V')
            {
                sc /= 5;
                i++;
            }
            else if (s[i + 1] == 'W')
            {
                sc /= 2;
                 i++;
            }

        }
    }

    cout << sc << endl;
    return 0;
}
