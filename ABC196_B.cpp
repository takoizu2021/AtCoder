#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  string x;
  cin>>x;
  
  int i = 0;
  while(i < x.size()) {
    if(x[i] == '.') {
      break;
    }
    else {
      cout<< x[i];
    }
    i++;
  }
}