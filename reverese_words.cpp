#include<bits/stdc++.h>
using namespace std ;
void reverse(int s,int e,string &r){
   while (s<=e)
   {
       swap(r[s],r[e]);
       s++;
       e--;
   }
    
}
int main()
{
    string s;
    cin.ignore();
    getline(cin,s);
    cout<<s<<endl;
    for(int i= 0,j=0;i<s.size();i++){
        if(s[i]==' '){
            reverse(j,i-1,s);
            j=i+1;
        }
        else if(s[i]=='\0')
            reverse(j,i-1,s);
    }
    cout<<s;
    return 0 ;
}