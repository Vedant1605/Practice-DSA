#include <bits/stdc++.h>
using namespace std;
void removeSpace(string &s)
{
    // int ct = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     if (s[i] != ' ')
    //         s[ct++] = s[i];
    // }
    // s[ct] = '\0';
    
    int ct=count(s.begin(),s.end(),' ');
    remove(s.begin(),s.end(),' ');
    s.resize(s.length()-ct);
}
bool checkPalindrome(string s)
{
    int i = 0, j = s.length() - 1;
    for (; i <= j; i++, j--)
    {
        if (tolower(s[i]) != tolower(s[j]))
            return false;
    }
    return true;
}
int main()
{
    string s;
    // cin.ignore();
    getline(cin,s);
    cout<<s<<endl;
    removeSpace(s);
    cout << s << endl;
    checkPalindrome(s) ? cout << "IsPalin" : cout << "isNot";
    return 0;
}