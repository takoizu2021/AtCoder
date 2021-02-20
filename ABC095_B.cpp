#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  
  int n,x;
  cin >> n >> x;  
  vector<int> pan(n);
  
  int sumpan = 0; //N種類各１個づつの合計粉量sump
  int sum = n; //作ったドーナツの数、各１種類は作るので初期値n
  
  //in
  rep(i,n) {
    cin >> pan[i];
    sumpan += pan[i]; //N種類各１個づつの合計粉量sump算
  }
    
  x -= sumpan; //N種類一つづつは作るので、総粉量からsumpを引く
  
  //最も粉の使用量が少ないドーナツをsort関数で探す。
  sort(pan.begin(), pan.end());

  //1種類づつ作った残りxから、最も粉の使用量が少ないドーナツを作っていく
  while(1) {
    if(x < pan[0] ) {
      break;
    }    
    x -= pan[0];
    sum ++;   
  }
  
  cout << sum << endl;
  
}
