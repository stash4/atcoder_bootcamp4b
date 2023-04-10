#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
  int a, b;
  string s;
  cin >> a >> b;
  cin >> s;

  string res = "Yes";
  if (s[a] != '-') {
    res = "No";
  } else {
    for (int i = 0; i < a + b + 1; i++) {
      if (i != a && (s[i] < '0' || s[i] > '9')) {
        res = "No";
        break;
      }
    }
  }

  cout << res;
  return 0;
}