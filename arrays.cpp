#include <bits/stdc++.h>
using namespace std;
class Arr
{
    vector<int> a;
    int size;

public:
    Arr(vector<int>);
    void print();
    void rotate(int);
    void reverse(int,int);
};
Arr::Arr(vector<int> v)
{
    a = v;
    size = v.size();
}
void Arr::print()
{
    for (auto i : a)
        cout << i << " ";
    cout << endl;
}
// 👍(●'◡'●)(●'◡'●)👌👌👌👌👌//
void Arr::reverse(int low,int high){
    while(low<high){
        swap(a[low],a[high]);
        low++;
        high--;
    }
}
void Arr:: rotate (int k){
    int n=size-1;
    k=k%(n+1);
    reverse(0,n-k);
    reverse(n-k+1,n);
    reverse(0,n);    
}
int main()
{
    vector<int> v = {1, 5, 6, 7, 4, 2};
    Arr a= Arr(v); 
    a.print();
    a.rotate(3);
    a.print();
    return 0;
}