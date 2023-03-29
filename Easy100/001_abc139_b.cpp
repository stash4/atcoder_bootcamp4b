#include <iostream>

using namespace std;

int main(void) {
  int a, b;
  cin >> a >> b;

  int tmp = a;
  int i = 0;
  if (b == 1) {
    cout << i;
    return 0;
  }
  i++;
  while (tmp < b) {
    tmp += a - 1;
    i++;
  }
  cout << i;
  return 0;
}
