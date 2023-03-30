#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
  int n;
  cin >> n;

  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());
  double res = v[0];
  for (int i = 1; i < n; i++) {
    res = (res + v[i]) / 2;
  }

  cout << res;
  return 0;
}