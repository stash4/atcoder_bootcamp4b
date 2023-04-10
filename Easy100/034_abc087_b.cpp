#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
  int a, b, c, x;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> x;

  int tmp, res = 0;
  for (int i = 0; i <= a; i++) {
    tmp = 500 * i;
    if (tmp == x) {
      res++;
      continue;
    }
    for (int j = 0; j <= b; j++) {
      tmp = 500 * i + 100 * j;
      if (tmp == x) {
        res++;
        continue;
      }
      for (int k = 0; k <= c; k++) {
        tmp = 500 * i + 100 * j + 50 * k;
        if (tmp == x) {
          res++;
          continue;
        }
      }
    }
  }

  cout << res;
  return 0;
}