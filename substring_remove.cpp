#include <bits/stdc++.h>
using namespace std;
string removeOccurrences(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    s1=removeOccurrences(s1,s2);
    cout << s1;
    return 0;
}
// 2
// 53134
/*
sjbcbshjbcsdbcjs
*/