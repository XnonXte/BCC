#include <bits/stdc++.h>
using namespace std;

void addNode(vector<vector<int>> &matrix, int x, int y, int weight) {
  matrix[x][y] = weight;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<vector<int>> matrix(5, vector<int>(5, 0));
  addNode(matrix, 0, 1, 5);
  addNode(matrix, 1, 2, 5);
  addNode(matrix, 3, 4, 6);

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}