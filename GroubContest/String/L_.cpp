#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    while (q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "pop_back")
        {
            if (!s.empty())
                s.pop_back();
        }
        else if (cmd == "front")
        {
            if (!s.empty())
                cout << s.front() << endl;
        }
        else if (cmd == "back")
        {
            if (!s.empty())
                cout << s.back() << endl;
        }
        else if (cmd == "sort")
        {
            int l, r;
            cin >> l >> r;
            if (l >= 1 && r <= s.size() && l <= r)
                sort(s.begin() + (l - 1), s.begin() + r);
        }
        else if (cmd == "reverse")
        {
            int l, r;
            cin >> l >> r;
            if (l >= 1 && r <= s.size() && l <= r)
                reverse(s.begin() + (l - 1), s.begin() + r);
        }
        else if (cmd == "print")
        {
            int pos;
            cin >> pos;
            if (pos >= 1 && pos <= s.size())
                cout << s[pos - 1] << endl;
        }
        else if (cmd == "substr")
        {
            int l, r;
            cin >> l >> r;
            if (l >= 1 && r <= s.size() && l <= r)
                cout << s.substr(l - 1, r - l + 1) << endl;
        }
        else if (cmd == "push_back")
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
    }

    return 0;
}

