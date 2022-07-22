#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> Tree[N];
void dfs(int vertex,int parent=0){
    // Taking actions after entering the vertex
    // if(visited[vertex])return;
    cout<<vertex<<"\n";
    for(auto child :Tree[vertex]){
        // taking actions before entering the child node
        if(child==parent)continue;
        cout<<"Parent-"<<vertex<<"child-"<<child<<endl;
        dfs(child,vertex);
        // taking actions after leaving the child node
    }
    // Take actions on verter before exiting the vertex node 
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n-1; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        Tree[v1].push_back(v2);
        Tree[v2].push_back(v1);
    }
    for (int i = 0; i < n-1 ; i++)
    {
        cout << i << "->";
        for (int j=0 ; j<Tree[i].size();j++)
            cout << Tree[i][j] << " ";
        cout << endl;
    }
    dfs(1);
    return 0;
}