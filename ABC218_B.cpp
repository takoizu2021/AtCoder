#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
using ll = long long;
//for (int tmp = 0; tmp < (1 << �r�b�g��); tmp++) {
//bitset<�r�b�g��> s(tmp);
//  // (�r�b�g��s�ɑ΂��鏈��)
//}

int main() {
  int p;
  
  char ans='a';
  for(int i=0; i<26; i++) {
    cin>>p;
    ans += p-1;
    cout<<ans;
    ans='a';
  }
  cout<<endl;
}