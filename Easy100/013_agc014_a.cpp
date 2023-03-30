#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int a, b, c;
  cin >> a >> b >> c;

  int count = 0;
  int ta = a, tb = b, tc = c;
  while (true) {
    if (ta % 2 == 1 || tb % 2 == 1 || tc % 2 == 1) {
      break;
    }
    int atmp = tb / 2 + tc / 2;
    int btmp = tc / 2 + ta / 2;
    int ctmp = ta / 2 + tb / 2;

    if (atmp == a && btmp == b && ctmp == c) {
      count = -1;
      break;
    }

    ta = atmp;
    tb = btmp;
    tc = ctmp;
    count++;
  }

  cout << count;
  return 0;
}