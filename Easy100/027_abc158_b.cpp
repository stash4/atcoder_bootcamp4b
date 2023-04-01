#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
  long long n, a, b;
  cin >> n >> a >> b;

  long long res = a * (n / (a + b));
  if (n % (a + b) < a) {
    res += n % (a + b);
  } else {
    res += a;
  }

  cout << res;
  return 0;
}