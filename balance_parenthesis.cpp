#include <bits/stdc++.h>
using namespace std;
unordered_map<char, int> m = {{'{', -1}, {'[', -2}, {'(', -3}, {'}', 1}, {']', 2}, {')', 3}};
string isBal(string str)
{
    stack<char> s;
    for (char c : str)
    {
        if (m[c] < 0)
            s.push(c);
        else
        {
            if (s.empty())
                return "NO";
            s.pop();
            if (m[c] + s.top() != 0)
                return "NO";
        }
    }
    if (s.empty())
        return "YES";
    return "NO";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        // cin.ignore();
        cin >> s;
        cout << isBal(s) << endl;
    }

    return 0;
}