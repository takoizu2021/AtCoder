#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int n;
  cin >> n;
  
  vector<int> card(n);
  
  rep(i,n) {
    cin >> card[i];
  }
  //数字が大きい順に配列をソート
  sort(card.begin(), card.end());
  reverse(card.begin(),card.end());
  
  int a = 0;
  int b = 0;
  
  rep(i,n) {
    if(i == 0 || i % 2 == 0) {
      a += card[i];
    }
    else {
      b += card[i];
    }
  }
  
  cout << a - b << endl;
}