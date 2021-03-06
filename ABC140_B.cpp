#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

//int num = atoi(str.c_str());    string型をint型に変換する
//string str = to_string(num);   int型をstring型に変換する

int main() {
  
  int n;
  cin >> n;
    
  vector<int> ichi(n);
  vector<vector<int> > data(3,ichi);
  
  //in
  rep(i,3) {
    rep(j,n) {
      cin >> data[i][j];
    }
  }
  //満足度sum
  int sum = 0;
  //料理自体の満足度をsum
  rep(i,n) {
    sum += data[1][i];
  }
  //i番目がi-1番目の料理なら、i-1番目の料理の追加満足度をsum
  rep(i,n) {
    if(i > 0) {    
      if(data[0][i] == data[0][i-1] + 1) {
        sum += data[2][data[0][i-1] - 1];
      }
    } 
  }
  
  cout << sum << endl;
    
}

