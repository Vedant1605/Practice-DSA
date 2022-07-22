#include <bits/stdc++.h>
using namespace std;
vector<int> v = {45, 65, 621, 64, 6, 46, 7, 1, 3, 67};
const int n = v.size();
void bubble_sort()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - 1; j++)
            if (v[j] >= v[j + 1])
                swap(v[j], v[j + 1]);
}
void insert_sort()
{
    int i = 1, j, key;
    for (; i < n; i++)
    {
        key = v[i];
        j = i - 1;

        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}
void print()
{
    for (auto i : v)
        cout << i << " ";
    cout << endl;
}
void insert(int x, int p)
{
    for (int i = n - 1; i >= p - 1; i--)
    {
        v[i + 1] = v[i];
    }
    v[p - 1] = x;
}
// merge sort;
void merge(int l, int r, int mid)
{
    int l_size = mid - l + 1;
    int r_size = r - (mid + 1) + 1;
    int L[l_size + 1], R[r_size + 1];
    for (int i = 0; i < l_size; i++)
    {
        L[i] = v[i + l];
    }
    for (int i = 0; i < r_size; i++)
    {
        R[i] = v[i + mid + 1];
    }
    L[l_size] = R[r_size] = INT_MAX;
    int l_i = 0, r_j = 0;
    for (int i = l; i <= r; i++)
    {
        if (L[l_i] < R[r_j])
        {
            v[i] = L[l_i];
            l_i++;
        }
        else
        {
            v[i] = R[r_j];
            r_j++;
        }
    }
}
void mergeSort(int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) / 2;
    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    merge(l, r, mid);
}
int minimum(int l)
{
    int mini = INT_MAX;
    int idx = 0;
    for (int i = l; i < v.size(); i++)
    {
        if (mini > v[i])
        {
            mini = min(mini, v[i]);
            idx = i;
        }
    }
    return idx;
}
void selection_sort()
{
    for (int i = 0; i < v.size()-1 ; i++)
    {
        int mini =minimum(i+1);
        swap(v[i], v[mini]);
    }
}
int main()
{
    // insert(465,3);
    print();
    cout << v.size();
    cout<<"\n"<<minimum(0)<<" "<<v[minimum(0)]<<endl;
    // mergeSort(0,n-1);
    selection_sort();
    // bubble_sort();
    cout << endl;
    print();
    cout << v.size();
    // insert_sort();
    return 0;
}