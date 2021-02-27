#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  
  vector<int> vec(3);
  vector<vector<int> > vec_n(n,vec);
  
  //in
  rep(i,n) {
    rep(j,3) {
      cin >> vec_n[i][j];
    }
  }
  
  int nedan  = 999999999;
  //“X‚²‚Æ‚ÉÝŒÉ‚ª‚ ‚é‚©‚ð”»’è‚µA‚ ‚Á‚½ê‡‘¼“X‚Æ”äŠr‚µ‚Ä‚â‚·‚¢‚È‚ç‚»‚Ì’l’i‚ð‹L˜^
  rep(i,n) {
    if( vec_n[i][0] >= vec_n[i][2] ) {
      continue;  
    }
    else { 
      nedan = min(nedan, vec_n[i][1]);
    }
  }
  
  if(nedan == 999999999) {
    cout << -1 << endl;
  }
  else {
    cout << nedan << endl;
  }
}