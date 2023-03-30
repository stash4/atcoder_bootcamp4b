#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
  string s;
  cin >> s;

  vector<int> c(10, 0);
  int j = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T') {
      c[j]++;
    } else {
      j++;
    }
  }

  cout << *max_element(c.begin(), c.end());
  return 0;
}