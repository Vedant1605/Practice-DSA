#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> graph[N];
vector<bool> visited(N);
void dfs(int vertex){
    // Taking actions after entering the vertex
    // if(visited[vertex])return;
    visited[vertex]=true; 
    cout<<vertex<<"\n";
    for(auto child :graph[vertex]){
        // taking actions before entering the child node
        cout<<"Parent-"<<vertex<<"child-"<<child<<endl;
        if(visited[child])continue;
        dfs(child);
        // taking actions after leaving the child node
    }
    // Take actions on verter before exiting the vertex node 
}
int main()
{
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    for (int i = 0; i < v ; i++)
    {
        cout << i << "->";
        for (int j=0 ; j<graph[i].size();j++)
            cout << graph[i][j] << " ";
        cout << endl;
    }
    dfs(1);
    return 0;
}