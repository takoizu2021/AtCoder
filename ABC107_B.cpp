#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //数学関数
using ll = long long;

int main() {
  int h,w;
  cin>>h>>w;
  
  vector<char> yoko(w);
  vector<vector<char> > mas(h,yoko);
  rep(i,h) rep(j,w) cin>>mas[i][j];
  
  vector<int> antw(w);
  vector<int> anth(h);
  
  //行がすべて白か判断。
  rep(i,h) {
    bool chk = false;
    rep(j,w) {
      if(mas[i][j] == '#') {
        chk = true;
        break;
      }
    }
    if(chk == false) anth[i]++;
  }
  //列がすべて白か判断。
  rep(j,w) {
    bool chk = false;
    rep(i,h) {
      if(mas[i][j] == '#') {
        chk = true;
        break;
      }
    }
    if(chk == false) antw[j]++;
  }
  
  rep(i,h) {
    if(anth[i] ==0) {
      rep(j,w) {
        if(antw[j] == 0) cout<<mas[i][j];
        if(j == w-1) cout<<endl;
      }
    }
  }
}