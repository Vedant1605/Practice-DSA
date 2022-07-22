#include <bits/stdc++.h>
using namespace std;
string palin(int n)
{
    int temp = n;
    int  rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return (rev == temp) ? "yes" : "no";
}
int main()
{
    int n, temp;
    cin >> n;
    cout<<palin(n);
    return 0;
}