#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int a,b,c,x;
  cin >>a>>b>>c>>x;
  
  int ct = 0;
  for(int i = 0;i <= a;i++) {
    for(int j = 0;j <= b;j++) {
      for(int k = 0;k <= c;k++){
        if(x == (i * 500) + (j * 100) + (k * 50)) {
          ct++;
        }
      }
    }
  }
  
  cout << ct << endl;
}