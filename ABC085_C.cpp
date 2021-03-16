#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int n,y;
  cin >> n >> y;
  
  //Å¬’PˆÊ‚ª1000‚È‚Ì‚Å1/1000 (10^7)‚Í10000
  y /= 1000;
  
  //i:10(10000) j:5(5000) k:1(1000)
  bool ans = false;
  for(int i = n;         i >= 0; i--) {
    for(int j = n-i;     j >= 0; j--) {
      for(int k = n-i-j; k >= 0; k--) {
        if(n == i + j + k) {
          if(y == i*10 + j*5 + k) {
            cout << i << " " << j << " " << k <<endl;
            ans = true;
            break;          
          }
        }
      }
      if(ans) {
        break;
      }
    }
    if(ans) {
      break;
    }
  }
  
  if(ans == 0) {
    cout << -1 << " " << -1 << " " << -1 <<endl;
  }
}