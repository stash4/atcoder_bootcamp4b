#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
  int n, x;
  cin >> n >> x;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int tmp = x, res = 0;
  for (int i = 0; i < n; i++) {
    tmp = tmp - a[i];
    if (tmp >= 0) {
      res++;
    }
    if (tmp <= 0) {
      break;
    }
  }
  if (tmp > 0) {
    res--;
  }

  cout << res;
  return 0;
}