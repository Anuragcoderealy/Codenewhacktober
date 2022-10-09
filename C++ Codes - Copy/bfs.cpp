//Breadth-First Travaersal of a graph represented by adjacency matrix
void bfs(vector<int> adj[], int v, int start) {
    vector<bool> visited(v, false);
    queue<int> q;
    q.push(start);
    visited[start] = true;
    
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        cout << x << " ";
        for(int y:adj[x]) {
            if(!visited[y]) {visited[y]=true;q.push(y);}
        }
    }
}
