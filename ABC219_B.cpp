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
  string s1,s2,s3,t;  
  cin>>s1>>s2>>s3>>t;
  
  rep(i,t.size()) {
    if(t[i]=='1') cout<<s1;
    else if(t[i]=='2') cout<<s2;
    else if(t[i]=='3') cout<<s3;
  }
  cout<<endl;
}