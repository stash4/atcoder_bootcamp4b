#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
  int n, m, c;
  cin >> n >> m >> c;
  int b[m];
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  int count = 0;
  for (int i = 0; i < n; i++) {
    int res = 0;
    for (int j = 0; j < m; j++) {
      int a;
      cin >> a;
      res += a * b[j];
    }
    if (res + c > 0) {
      count++;
    }
  }
  cout << count;
  return 0;
}