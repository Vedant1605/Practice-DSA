#include<bits/stdc++.h>
using namespace std ;
int n;
int t;
vector<int> v;
int f_o(){
    int l=0,h=n-1,mid;
    int ans=-1;
    while(h-l>1){
        mid=(h+l)/2;
        if(v[mid]<t)
            l=mid+1;
        else
            h=mid;
    }
    if(v[l]==t)return l;
    else return h;
}
int l_o(){
    int l=0,h=n-1,mid;
    int ans=-1;
    while(h-l>1){
        mid=(h+l)/2;
        if(v[mid]>t)
            h=mid-1;
        else
            l=mid;
    }
    if(v[h]==t)return h;
    else return l;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>v[i];
    cin>>t;
    cout<<f_o();
    cout<<l_o();
    return 0 ;
}