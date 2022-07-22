#include<bits/stdc++.h>
using namespace std ;
int M=1e7+9;
int BERec(int a,int b){
    if(b==0)return 1;
    int res=BERec(a,b/2);
    if(b&1)return (a*(res*1LL*res)%M)%M;
    return (res*1LL*res)%M;
}
int BEItr(int a ,int b){
    
}
int main()
{
    cout<<BERec(2,10)<<endl;
    return 0 ;
}