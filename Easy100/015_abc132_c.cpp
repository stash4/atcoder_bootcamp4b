#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int n;
  cin >> n;

  vector<int> d(n);
  for (int i = 0; i < n; i++) {
    cin >> d[i];
  }

  sort(d.begin(), d.end());

  int p = n / 2;
  cout << d[p] - d[p - 1];
  return 0;
}