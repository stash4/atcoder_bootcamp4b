#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
  int n, a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;
  a = a + b;
  int pass = 0, pass_f = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'a' && pass < a) {
      pass++;
      cout << "Yes" << endl;
    } else if (s[i] == 'b' && pass < a && pass_f < b) {
      pass++;
      pass_f++;
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}