#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  
  int r,c; // r行、c列
  cin >> r >> c;
  
  //二次元配列を宣言
  vector<int> gyou(r + 1);
  vector<vector<int> > hyou(c + 1,gyou);
  
  int sum_r = 0; // r行の合計
  int sum_c = 0; // c列の合計

  //表にデータ入力、出力
  rep(i, r + 1) {
    rep(j, c + 1) {
      
      //行が最後尾までは下を実行
      if(i != r) {
        //列の要素を入力、出力、合計            
        if(j != c) {
          cin >> hyou[i][j];        
          cout << hyou[i][j] << " ";
          sum_c += hyou[i][j];
        }
        //列が最後尾のcまで来たら合計を入力、出力、初期化して改行
        else if(j == c) {
          hyou[i][j] = sum_c;
          cout << hyou[i][j] << endl;
          sum_c = 0;
        }
      }
      
      //行が最後尾のrまで来たら各業の合計を計算、出力、初期化
      else if(i == r) {
        rep(k, r + 1) {
            sum_r += hyou[k][j]; 
          }
        if(j != c) {          
          cout << sum_r << " ";
          sum_r = 0;
        }
        else if(j == c) {
          cout << sum_r << endl;
          sum_r = 0;
        }      
      }

    }
  }
  
}
