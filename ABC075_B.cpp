#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //���w�֐�
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
        if(masu[i-1][j-1] == '#') ct++; //���΂ߏ�
        if(masu[i-1][j] == '#') ct++; //��
        if(masu[i-1][j+1] == '#') ct++; //�E�΂ߏ�
        if(masu[i][j-1] == '#') ct++; //��
        if(masu[i][j+1] == '#') ct++; //�E
        if(masu[i+1][j-1] == '#') ct++; //���΂߉�
        if(masu[i+1][j] == '#') ct++; //��
        if(masu[i+1][j+1] == '#') ct++; //�E�΂߉�
        
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