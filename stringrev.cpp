#include <bits/stdc++.h>
using namespace std;
string strRev(string str)
{
    if (str.size() == 0)
        return "";
    return strRev(str.substr(1)) + str[0];
}
int main()
{
    string s="sjhvdb";
    cout<<strRev(s);
    return 0;
}