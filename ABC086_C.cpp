#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int n;
  cin >> n;
  
  int t,x,y;
  int ti=0;
  int xi=0;
  int yi=0;
  int p =0;
  bool ans = true;
  rep(i,n) {
    cin>>t>>x>>y;
    ti = t - ti;
    xi = max(x,xi) - min(x,xi);
    yi = max(y,yi) - min(y,yi);
     p = xi + yi;
    if     (ti < p) {
      ans = false;
      break;
    }
    else if( ti == p ||
            (ti  - p) % 2 == 0){
      ti = t;
      xi = x;
      yi = y;
    }
    else {
      ans = false;
      break;
    }
  }
  
  if(ans == true) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
}