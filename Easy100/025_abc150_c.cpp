#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
  int n;
  cin >> n;

  char p[n], q[n];
  vector<int> r(n);
  for (int i = 0; i < n; i++) {
    char tmp;
    cin >> tmp;
    p[i] = (char)tmp;
    r[i] = i + 1;
  }

  for (int i = 0; i < n; i++) {
    char tmp;
    cin >> tmp;
    q[i] = (char)tmp;
  }

  int ps = stoi(p);
  int qs = stoi(q);

  int m = pow(n, n), k = 0;
  vector<int> ap(m);
  do {
    string tmp = "";
    for (int i = 0; i < n; i++) {
      tmp = tmp + to_string(r[i]);
    }
    ap[k] = stoi(tmp);
    k++;
  } while (next_permutation(r.begin(), r.end()));

  int res =
      distance(find(ap.begin(), ap.end(), ps), find(ap.begin(), ap.end(), qs));

  cout << abs(res);
  return 0;
}