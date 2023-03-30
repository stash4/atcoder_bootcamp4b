#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  string a, b;
  cin >> a >> b;
  a = a + b;
  int n = stoi(a);
  double res = sqrt(n);
  if (res == floor(res)) {
    cout << "Yes";
  } else {
    cout << "No";
  }
  return 0;
}