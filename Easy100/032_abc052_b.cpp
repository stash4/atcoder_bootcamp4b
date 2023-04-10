#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
  int n;
  string s;
  cin >> n;
  cin >> s;

  vector<int> x(n + 1, 0);
  for (int i = 0; i < n; i++) {
    if (s[i] == 'I') {
      x[i + 1] = x[i] + 1;
    } else {
      x[i + 1] = x[i] - 1;
    }
  }

  int res = *max_element(x.begin(), x.end());
  cout << res;
  return 0;
}