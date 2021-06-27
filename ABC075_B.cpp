#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //数学関数
using ll = long long;

int main() {
  int h,w;
  cin>>h>>w;
  
  vector<char> yoko(w+2);
  vector<vector<char> > masu(h+2,yoko);
  rep2(i,1,h+1) {
    rep2(j,1,w+1) {
      cin>>masu[i][j];
    }
  }
  
  rep2(i,1,h+1) {
    rep2(j,1,w+1) {
      if(masu[i][j] != '#') {
        int ct=0;
        if(masu[i-1][j-1] == '#') ct++; //左斜め上
        if(masu[i-1][j] == '#') ct++; //上
        if(masu[i-1][j+1] == '#') ct++; //右斜め上
        if(masu[i][j-1] == '#') ct++; //左
        if(masu[i][j+1] == '#') ct++; //右
        if(masu[i+1][j-1] == '#') ct++; //左斜め下
        if(masu[i+1][j] == '#') ct++; //下
        if(masu[i+1][j+1] == '#') ct++; //右斜め下
        
        char a = '0' + ct;
        masu[i][j] = a;
      }
    }
  }
  
  rep2(i,1,h+1) {
    rep2(j,1,w+1) {
      cout<<masu[i][j];
      if(j == w) cout<<endl;
    }
  }
}