#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int a,b,w;
  cin>>a>>b>>w;
  
  int mn = 10010010, mx = 0;
  for(int n = 1; n<= 1000000; n++) {
    if(a * n <= 1000 * w && 1000 * w <= b * n) {
      mn = min(mn,n);
      mx = max(mx,n);
      //cout<< n <<" "<< mn <<" "<<mx<<endl;
    }
  }
  
  if(mx == 0) cout << "UNSATISFIABLE";
  else cout<<mn<<" "<<mx;    
  
}