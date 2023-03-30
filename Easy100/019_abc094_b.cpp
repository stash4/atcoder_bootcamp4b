#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
  int n, m, x;
  cin >> n >> m >> x;

  vector<int> a(m + 1);
  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }

  int res;
  if (x < a[0] || x > a[m - 1]) {
    res = 0;
  } else {
    a[m] = x;

    sort(a.begin(), a.end());
    auto it = find(a.begin(), a.end(), x);
    int p = distance(a.begin(), it);
    if (p <= m - p) {
      res = p;
    } else {
      res = m - p;
    }
  }

  cout << res;
  return 0;
}