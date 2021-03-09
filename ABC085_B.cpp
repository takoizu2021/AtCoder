#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int n;
  cin >> n;
  
  vector<int> mochi(n);
  rep(i,n){
    cin >> mochi[i];
  }
  
  //¬‚³‚¢‡‚É•À‚Ñ‘Ö‚¦‚é
  sort(mochi.begin(), mochi.end());
  
  int ans = 1;
  rep2(i,1,n) {
    if(mochi[i] > mochi[i - 1]) {
      ans++;
    }
  }
  cout << ans << endl;
}