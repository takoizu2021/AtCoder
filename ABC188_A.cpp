#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  int x,y;
  cin >> x >> y;
  int mn = min(x,y);
  int mx = max(x,y);
  if(mn + 3 > mx) {
    cout << " Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
}