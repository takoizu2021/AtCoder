#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  
  rep(i,n) {
    cin >>a[i];
  }
  
  int ct = 0;
  bool i = true;
  while(i) {
    rep(j,n) {
      if(a[j] % 2 == 0) {
        a[j] /= 2;
      }
      else {
        i = false;
        break;
      }
    }
    
    if(i == true) {
      ct++;
    }
  }
  cout << ct << endl;
}