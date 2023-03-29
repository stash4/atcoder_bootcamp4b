#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
  int n;
  cin >> n;
  int x[n];
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> x[i];
    sum += x[i];
  }

  int p = round((double) sum / n);
  int res = 0;
  for (int i = 0; i < n; i++) {
    res += (x[i] - p) * (x[i] - p);
  }

  cout << res;
  return 0;
}