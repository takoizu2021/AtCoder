#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int n;
  cin >> n;
  
  vector<int> p(n + 1);
  rep2(i,1,n) {
    cin >> p[i];
  }  
  
  int ans = 0;  
  rep2(i,1,n) {
    if(p[i] != i) {
      ans++;
    }
  }
  
  if(ans > 2) {
    cout << "NO" << endl;
  }
  else {
    cout << "YES" << endl;
  }
}