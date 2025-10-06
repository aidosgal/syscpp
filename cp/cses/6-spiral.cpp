#include <bits/stdc++.h>

using namespace std;

void solve() {
  int row, col;
  cin >> row >> col;

  int n = max(row, col);

  if (n % 2 != 0) {
    swap(row, col);
  }

  if (n == col) {
    cout << (long long) (n - 1)*(n - 1) + 1 + row - 1 << "\n";
  } else {
    assert(n == row);
    cout << (long long) n * n - (col - 1) << "\n";
  }
}

int main() {
  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    solve();
  }
}
