#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
  int a, b, m;
  cin >> a >> b >> m;

  vector<int> al(a);
  for (int i = 0; i < a; i++) {
    cin >> al[i];
  }

  vector<int> bl(b);
  for (int i = 0; i < b; i++) {
    cin >> bl[i];
  }

  int res =
      *min_element(al.begin(), al.end()) + *min_element(bl.begin(), bl.end());

  int x, y, c;
  int tmp;
  for (int i = 0; i < m; i++) {
    cin >> x >> y >> c;
    tmp = al[x - 1] + bl[y - 1] - c;
    if (tmp < res) {
      res = tmp;
    }
  }

  cout << res;
  return 0;
}