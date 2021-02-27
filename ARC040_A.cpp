#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  int h,w;
  cin >> h >> w;
  
  //横w,縦hの配列
  vector<int> vec(w);
  vector<vector<int> > masu(h,vec);
  //塗りつぶしたマスのカウント
  int ct = 0;
  //左斜め上の１マス横から塗りつぶす
  rep(i,h) {
    rep2(j,1,w) {
      ct++;
    }
  }
  //左斜め上の１マス下から塗りつぶす
  rep2(i,1,h) {
    rep(j,w) {
      ct++;
    }
  }  
  cout << ct << endl;
}