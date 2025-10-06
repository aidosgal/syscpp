#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  long long sum = (long long) n * (n+1) / 2;
  long long x = 0;
  for (int i = 0; i < n - 1; i++) {
    int a;
    cin >> a;
    x += a;
  }
  cout << sum - x;
}
