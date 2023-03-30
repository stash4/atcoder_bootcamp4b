#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int n, k;
  cin >> n;
  cin >> k;

  vector<int> x(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> x[i];
    if (k - x[i] < x[i]) {
      sum += (k - x[i]) * 2;
    } else {
      sum += x[i] * 2;
    }
  }
  cout << sum;
  return 0;
}