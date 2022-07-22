#include <bits/stdc++.h>
using namespace std;
double eps = 1e-6;
double multi(double ans, int n)
{
    double rev=1;
    while (n--)
    {
        rev*= ans;
    }
    return rev;
}
int main()
{
    double x;
    int n;
    cin >> x;
    cin>>n;
    double lo = 1, hi = x, mid;
    while (hi - lo > eps)
    {
        mid = (hi + lo) / 2;
        if (multi(mid, n) < x)
            lo = mid; // mid se bada hoga is mid ko exc;ude kr dia
        else
            hi = mid;
    }
    cout<<setprecision(7)<<lo<<"\n"<<hi<<endl;
    return 0;
}
