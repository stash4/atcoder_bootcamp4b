#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
  int n;
  cin >> n;

  int price1 = (int)floor(n / 1.08);
  int price2 = price1 + 1;
  int res1 = (int)floor(price1 * 1.08);
  int res2 = (int)floor(price2 * 1.08);
  if (res1 == n) {
    cout << price1;
  } else if (res2 == n) {
    cout << price2;
  } else {
    cout << ":(";
  }

  return 0;
}