#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  
  int r,c; // rsAc—ñ
  cin >> r >> c;
  
  //“ñŸŒ³”z—ñ‚ğéŒ¾
  vector<int> gyou(100 + 1);
  vector<vector<int> > hyou(100 + 1,gyou);
 
  //in
  rep(i,r) {
    rep(j,c){
      cin >> hyou[i][j];
    }
  }
  
  //sum
  rep(i,r) {
    rep(j,c){
      hyou[i][c] += hyou[i][j];
      hyou[r][j] += hyou[i][j];
      hyou[r][c] += hyou[i][j];
    }
  }

  //out
  rep(i,r + 1) {
    rep(j,c + 1){      
      if(j != c) {
        cout << hyou[i][j] << " ";
      }
      else {
        cout << hyou[i][j] << endl;
      }
    }
  }
  
}
