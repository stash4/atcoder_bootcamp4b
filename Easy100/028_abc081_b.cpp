#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
  long long n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int res = 0, flg = 0;
  while (true) {
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 1) {
        flg = -1;
        break;
      } else {
        a[i] = a[i] / 2;
      }
    }
    if (flg == -1) {
      break;
    }
    res++;
  }

  cout << res;
  return 0;
}