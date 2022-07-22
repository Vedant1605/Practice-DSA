#include <bits/stdc++.h>
using namespace std;
int lower_bound(vector<int> &a, int val)
{
    int lo = 0;
    int hi = a.size() - 1;
    while (hi - lo > 1)
    {
        int mid = (lo + hi) / 2;
        if (val > a[mid])
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (a[lo] >= val)
        return lo;
    else if (a[hi] >= val)
        return hi;
    return -1;
}
int upper_bound(vector<int> &a, int val)
{
    int lo = 0;
    int hi = a.size() - 1;
    while (hi - lo > 1)
    {
        int mid = (lo + hi) / 2;
        if (val >= a[mid])
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (a[lo] > val)
        return lo;
    else if (a[hi] > val)
        return hi;
    return -1;
}

int main()
{
    vector<int> a={1,5,6,7,8,9,12,36,45,78,96,98,758};
    int x;
    cin>>x;
    cout<<a[lower_bound(a,x)]<<endl;
    cout<<a[upper_bound(a,x)];
    return 0;
}