#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int a,b;
  cin >> a >> b;
  if(abs(a) < abs(b)) {
    cout << "Ant" << endl;
  }
  else if(abs(a) > abs(b)) {
    cout << "Bug" << endl;
  }
  else {
    cout << "Draw" << endl;
  }
}