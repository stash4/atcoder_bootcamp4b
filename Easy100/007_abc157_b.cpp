#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int a[3][3];
  for (int i = 0; i < 3; i++) {
    cin >> a[i][0] >> a[i][1] >> a[i][2];
  }
  int n, b;
  cin >> n;
  vector<vector<int>> p(3, vector<int>(3, 1));
  for (int k = 0; k < n; k++) {
    cin >> b;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if (b == a[i][j]) {
          p[i][j] = 0;
        }
      }
    }
  }
  int res[8];
  for (int i = 0; i < 3; i++) {
    res[i] = p[i][0] + p[i][1] + p[i][2];
    res[i + 3] = p[0][i] + p[1][i] + p[2][i];
  }
  res[6] = p[0][0] + p[1][1] + p[2][2];
  res[7] = p[0][2] + p[1][1] + p[2][0];
  for (int i = 0; i < 8; i++) {
    if (res[i] == 0) {
      cout << "Yes";
      return 0;
    }
  }
  cout << "No";
  return 0;
}