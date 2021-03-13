#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int n,m,t;
  cin >> n >> m >> t;
  
  int a = 0;
  int b = 0;
  int batt = n;
  for(int i = 0; i <= t; i++) {
    if(i <= b) {
      for(int j = 0; j < m; j++) {
        cin >> a >> b;
        batt -= (a - i);
        if(batt <= 0) {
          break;
        }
      i = a;
        batt += (b - a);
        if(batt >= n) {
          batt = n;
        }
      i = b;
      }
    }
    if(batt <= 0) {
      break;
    }
    if(i > b) {
      batt -= 1;
    }
  }
  
  if(batt <= 0) {
    cout << "No" <<endl;
  }
  else {
    cout << "Yes" <<endl;
  }
}  