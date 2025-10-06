#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  int build = 0;
  for (int i = 0; i < (int) s.size(); i++) {
    if (i != 0 && s[i] == s[i-1]) {
      build++;
    } else {
      ans = max(ans, build);
      build = 1;
    }
  }
  ans = max(ans, build);
  cout << ans;
}
