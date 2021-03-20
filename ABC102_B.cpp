#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int n;
  cin >> n;
  //in
  vector<int> a(n);
  rep(i,n) {
    cin >> a[i];
  }
  
  int ans = 0;
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      ans = max(ans,max( abs(a[i]),abs(a[j]) ) - min( abs(a[i]),abs(a[j])) );
    }
  }
  
  cout << ans << endl;
}