#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int k, n;
  cin >> k >> n;

  vector<int> a(n);
  int m = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i > 0) {
      if (m < a[i] - a[i - 1]) {
        m = a[i] - a[i - 1];
      }
    }
  }
  if (m < k - a[n - 1] + a[0]) {
    m = k - a[n - 1] + a[0];
  }

  cout << k - m;
  return 0;
}