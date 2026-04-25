#include <bits/stdc++.h>
using namespace std;

int x, y;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int floodfill(vector<vector<int>> &matrix, vector<vector<bool>> &visited, int i,
              int j, int color) {
  if (i < 0 || i >= x || j < 0 || j >= y)
    return 0;

  if (visited[i][j] || matrix[i][j] != color)
    return 0;

  visited[i][j] = true;
  int cnt = 1;
  for (int d = 0; d < 4; d++) {
    cnt += floodfill(matrix, visited, i + dx[d], j + dy[d], color);
  }

  return cnt;
}

int main() {
  cin >> x >> y;
  vector<vector<int>> matrix(x, vector<int>(y));
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      cin >> matrix[i][j];
    }
  }

  int ans = 0;
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      vector<vector<bool>> visited(x, vector<bool>(y, false));
      int size = floodfill(matrix, visited, i, j, matrix[i][j]);
      int score = size * (size - 1);
      ans = max(ans, score);
    }
  }

  cout << ans << endl;
  return 0;
}
