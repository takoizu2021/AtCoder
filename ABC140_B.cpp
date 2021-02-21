#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

//int num = atoi(str.c_str());    stringŒ^‚ðintŒ^‚É•ÏŠ·‚·‚é
//string str = to_string(num);   intŒ^‚ðstringŒ^‚É•ÏŠ·‚·‚é

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
  //–ž‘«“xsum
  int sum = 0;
  //—¿—Ž©‘Ì‚Ì–ž‘«“x‚ðsum
  rep(i,n) {
    sum += data[1][i];
  }
  //i”Ô–Ú‚ªi-1”Ô–Ú‚Ì—¿—‚È‚çAi-1”Ô–Ú‚Ì—¿—‚Ì’Ç‰Á–ž‘«“x‚ðsum
  rep(i,n) {
    if(i > 0) {    
      if(data[0][i] == data[0][i-1] + 1) {
        sum += data[2][data[0][i-1] - 1];
      }
    } 
  }
  
  cout << sum << endl;
    
}

