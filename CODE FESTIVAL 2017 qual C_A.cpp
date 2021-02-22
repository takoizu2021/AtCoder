#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  string s;
  cin >> s;
  string a = "11";
  rep(i,s.length()) {
    a[0] = s[i];
    a[1] = s[i + 1];
    if(a == "AC") {
      cout << "Yes" << endl;
      break;
    }
  }
  if(a != "AC") {
    cout << "No" << endl;
  }
}