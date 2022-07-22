#include <bits/stdc++.h>
using namespace std;
vector<int> NGE(vector<int> v)
{
    stack<int> s;
    vector<int> ans;
    for (int  i = 0; i < v.size(); i++)
    {
        while (s.empty()||v[i]>v[s.top()])
        {
            
        }
        
    }
    
    return ans;
}
void print(vector<int> v)
{
    for (auto i : v)
        cout << i << " ";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    return 0;
}