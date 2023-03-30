#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
  int s;
  cin >> s;

  vector<int> a(1000000);
  a[0] = s;
  int res;
  for (int i = 1; i < 1000000; i++) {
    int tmp;
    if (a[i - 1] % 2 == 0) {
      tmp = a[i - 1] / 2;
    } else {
      tmp = 3 * a[i - 1] + 1;
    }
    auto it = find(a.begin(), a.end(), tmp);
    if (it != a.end()) {
      res = i + 1;
      break;
    } else {
      a[i] = tmp;
    }
  }

  cout << res;
  return 0;
}