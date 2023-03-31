#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
  int n, d, x;
  cin >> n;
  cin >> d >> x;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int tmp, res = 0;
  for (int i = 0; i < n; i++) {
    tmp = 0;
    for (int j = 0; j < d; j++) {
      tmp = j * a[i] + 1;
      if (tmp > d) {
        break;
      }
      res++;
    }
  }

  cout << res + x;
  return 0;
}