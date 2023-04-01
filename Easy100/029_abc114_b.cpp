#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
  string s;
  cin >> s;

  string xs;
  int tmp, x, y = 753, res = 999;
  for (int i = 2; i < s.length(); i++) {
    xs = {s[i - 2], s[i - 1], s[i]};

    x = stoi(xs);
    tmp = abs(x - y);
    if (tmp < res) {
      res = tmp;
    }
  }

  cout << res;
  return 0;
}