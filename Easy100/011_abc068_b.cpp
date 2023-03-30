#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int n;
  cin >> n;

  int res = 1;
  while (true) {
    if (res * 2 > n) {
      break;
    };
    res *= 2;
  }

  cout << res;
  return 0;
}