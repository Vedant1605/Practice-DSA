#include<bits/stdc++.h>
using namespace std ;
int main()
{
    // ifstream in("sample.txt");
    // vector<string>st;
    
    // while(in){
    // string temp;
    // getline(in,temp);
    // st.push_back(temp);
    // }
    
    fstream out;
    out.open("sample.txt",out.app);
    out<<"\nbaka";
    out.close();
    //taking input and writing it in file
    fstream wrt;
    wrt.open("console.txt",wrt.app);
    string line;
    while (wrt)
    {
        getline(cin,line);
        if(line=="-1")
            break;
        wrt<<line<<endl;
    }
    wrt.close();
    wrt.open("console.txt",wrt.in);
    while (wrt)
    {
        getline(wrt,line);
        cout<<line<<endl;
    }
    wrt.close();
    
    return 0 ;
} 