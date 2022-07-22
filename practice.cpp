#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int a=10,b=5;
    cout<<a<<" "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b<<endl;
    cout<<"The fibonacii series till 10"<<endl;
    int x=0,y=1,z;
    cout<<x<<" "<<y<<" ";
    int n=10;
    n-=2;
while(n--)
{
    z=x+y;
    x=y;
    y=z;
    cout<<y<<" ";
}

    return 0 ;
}