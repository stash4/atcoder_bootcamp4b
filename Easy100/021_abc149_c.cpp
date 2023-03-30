#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
  int x;
  cin >> x;

  int i = x;
  int n, res = -1;
  if (x == 2) {
    res = 2;
  } else {
    while (res == -1) {
      n = (int)round(sqrt(i));
      for (int j = 2; j < n + 1; j++) {
        if (i % j == 0) {
          break;
        } else if (j == n) {
          res = i;
        }
      }
      i++;
    }
  }

  cout << res;
  return 0;
}