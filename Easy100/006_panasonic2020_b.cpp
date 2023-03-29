#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
  long long h, w;
  cin >> h >> w;
  if (h == 1 || w == 1) {
    cout << 1;
  } else if (h * w % 2 == 0) {
    cout << h * w / 2;
  } else {
    cout << (h * w / 2) + 1;
  }

  return 0;
}