// #include <bits/stdc++.h>
// using namespace std;

// void addNode(vector<vector<int>> &matrix, int x, int y, int weight) {
//   matrix[x][y] = weight;
// }

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   vector<vector<int>> matrix(5, vector<int>(5, 0));
//   addNode(matrix, 0, 1, 5);
//   addNode(matrix, 1, 2, 5);
//   addNode(matrix, 3, 4, 6);

//   for (int i = 0; i < 5; i++) {
//     for (int j = 0; j < 5; j++) {
//       cout << matrix[i][j] << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

vector<int> dfs(vector<vector<int>> &adj) {
  int n = adj.size();

  vector<bool> visited(n, false);
  vector<int> res;

  // Start DFS from node 0.
  stack<int> st;
  st.push(0);

  while (!st.empty()) {
    int node = st.top();
    st.pop();

    // If node is already visited, continue
    if (visited[node] == true) {
      continue;
    }

    // Mark this node as visited
    visited[node] = true;
    res.push_back(node);

    // Traverse all edges (as stack is used, so
    // push from right to left)
    int size = adj[node].size();
    for (int i = size - 1; i >= 0; i--) {
      int v = adj[node][i];
      if (!visited[v])
        st.push(v);
    }
  }

  return res;
}

vector<int> bfs(vector<vector<int>> &adj) {
  int V = adj.size();
  vector<bool> visited(V, false);
  vector<int> res;

  queue<int> q;

  int src = 0;
  visited[src] = true;
  q.push(src);

  while (!q.empty()) {
    int curr = q.front();
    q.pop();
    res.push_back(curr);

    // visit all the unvisited
    // neighbours of current node
    for (int x : adj[curr]) {
      if (!visited[x]) {
        visited[x] = true;
        q.push(x);
      }
    }
  }

  return res;
}

int main() {
  vector<vector<int>> adj = {{1, 2}, {2}, {0, 3}, {3}};
  vector<int> res = bfs(adj);
  for (auto node : res)
    cout << node << " ";
  cout << endl;

  return 0;
}