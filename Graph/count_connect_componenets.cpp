#include<bits/stdc++.h>
using namespace std ;
const int N=1e5+10;
vector<int> graph[N];
vector<bool> visited(N);
vector<vector<int>>cc;
vector<int> current_cc;
void dfs(int vertex){
    visited[vertex]=true;
    current_cc.push_back(vertex);
    for(auto child :graph[vertex]){
        if(visited[child])continue;
        dfs(child);
    }
}
int main()
{
    int v,e;
    cin>>v>>e;
    for(int i=0;i<e;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    for(int i=0;i<v;i++){
        cout<<i<<"->";
        for(auto edges:graph[i])cout<<edges<<",";
        cout<<endl;
    }
    int ct=0;
    for(int i=1;i<=v;i++){
        if(visited[i])continue;
        else{
            current_cc.clear();
            dfs(i);
            cc.push_back(current_cc);
            ct++;
        }
    }
    cout<<cc.size()<<endl;
    for(auto i:cc){
        for(auto j:i)cout<<j<<" ";
        cout<<endl;
    }
    return 0 ;
}