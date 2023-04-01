#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
  long long h;
  cin >> h;

  long long d = 1, res = 0;
  while (true) {
    if (h == 0) {
      break;
    } else {
      h = h / 2;
      res += d;
      d = d * 2;
    }
  }

  cout << res;
  return 0;
}