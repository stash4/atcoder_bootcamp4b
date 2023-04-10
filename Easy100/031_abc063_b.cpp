#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
  string s;
  cin >> s;

  sort(s.begin(), s.end());

  for (int i = 1; i < s.length(); i++) {
    if (s[i - 1] == s[i]) {
      cout << "no";
      return 0;
    }
  }
  cout << "yes";
  return 0;
}