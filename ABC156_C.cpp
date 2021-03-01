#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int n;
  cin >> n;
  
  //x in
  vector<int> vec(101);
  int x; int mini = 101;  int maxm = 0;
  rep(i, n) {
    cin >> x;
    ++vec[x];
    mini = min(mini,x);
    maxm = max(maxm,x);
  }
  
  //消費体力を計算
  int h = 0; //座標pごとのn人合計の消費体力  
  int ans = 100100100; //全hの合計最小消費体力
  for(int i = mini; i <= maxm; i++) { //xの最小値から最大値までの間をループする
    for(int j = mini; j <= maxm; j++) {
      if(vec[j] != 0) {
        h += (j - i) * (j - i) * vec[j];　//vec[j]は同じ座標の人数分計算
      }
    }
    ans = min(ans,h);
    h = 0;
  }
  
  cout << ans << endl;
}