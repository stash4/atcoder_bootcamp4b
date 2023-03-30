#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
  int n;
  cin >> n;

  map<int, int> a;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    a.insert(make_pair(tmp, i + 1));
  }

  for (auto &item : a) {
    cout << item.second << " ";
  }
  return 0;
}