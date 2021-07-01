#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int s;
  cin>>s;
  
  vector<int> v(1);
  v[0] = s;
  
  int ans = 0, i = 0;
  while(ans == 0) {
    if(v[i] % 2 == 0) 
      v.push_back(v[i]/2);
    else 
      v.push_back((v[i]*3)+1);
    //cout<<v[i]<<" ";
      
    for(int j=0; j<v.size()-1; j++) {
      if(v[v.size()-1] == v[j]) {
        ans = v.size()-1 + 1;
        break;
      }
    }
    i++;
  }
  cout<<ans<<endl;
}