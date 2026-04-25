#include <bits/stdc++.h>
using namespace std;

int x, y, a, b, value;
vector<vector<bool>> visited(25, vector<bool>(25, false));

void floodfill(vector<vector<int>> &matrix, int i, int j, int core) {
  if (i >= 0 && i < x && j >= 0 && j < y && visited[i][j] == false &&
      matrix[i][j] == core) {
    visited[i][j] = true;
    value++;
    floodfill(matrix, i + 1, j, core);
    floodfill(matrix, i - 1, j, core);
    floodfill(matrix, i, j + 1, core);
    floodfill(matrix, i, j - 1, core);
  }
}

int main() {
  cin >> x >> y;
  vector<vector<int>> matrix(x, vector<int>(y));

  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      cin >> matrix[i][j];
    }
  }

  cin >> a >> b;
  int core = matrix[a][b];
  floodfill(matrix, a, b, core);

  cout << value * (value - 1) << endl;

  return 0;
}