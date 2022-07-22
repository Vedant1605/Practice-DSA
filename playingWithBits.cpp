#include <bits/stdc++.h>
using namespace std;
void printBinary(int x)
{
    for (int i = 10; i >= 0; i--)
        cout << ((x >> i) & 1) << " ";
    cout << endl;
}
int main()
{
    int x;
    cin >> x;
    // for (int i = 0; i <= x; i++)
    // {
    //     cout << "the binary of " << i << " is ";
    //     printBinary(i);
    //     cout<< endl;
    // }
    printBinary(x);
    // checking whether ith bit is set or unset
    int i;
    cin >> i;
    printBinary(1 << i);
    cout << "The " << i << "th bit is";
    if (x & (1 << i))
        cout << " SET" << endl;
    else
        cout << " UNSET" << endl;

    // SETting the ith bit
    cout << "for seting ith bit => Taking OR with " << endl;
    printBinary((1 << i));
    printBinary(x | (1 << i));

    // USETting the ith bit
    cout << "for Unseting ith bit => Taking AND with " << endl;
    printBinary(~(1 << i));
    printBinary(x & (~(1 << i)));

    // Toggling a ith bit i.e if 0=>1 or 1=>0
    cout << "for Toggling ith bit => Taking XOR with " << endl;
    printBinary((1 << i));
    printBinary(x ^ (1 << i));

    // Counting the number of set bits;
    printBinary(x);
    int ct = 0;
    for (int j = 31; j >= 0; j--)
    {
        if (x & (1 << j))
            ct++;
    }
    cout << "No of SET bits are " << ct << endl;
    // builtin fuctions in stl
    cout<<__builtin_popcount(x)<<endl; 
    cout<<__builtin_popcountll((1LL<<34)-1)<<endl;



    // checking odd even
        if(x&1)cout<<"Odd"<<endl;
        else cout<<"Even"<<endl;
        return 0;
}
