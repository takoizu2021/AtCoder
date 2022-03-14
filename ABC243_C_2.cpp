#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9+1000; //10^9
using ll = long long;
int main() {
  int n;
  cin>>n;
  vector<int> x(n), y(n);
  rep(i,n) cin>>x[i]>>y[i];
  string s;
  cin>>s;
  
  //y‚²‚Æ‚Ìi
  map<int,vector<int>> mp;
  rep(i,n) mp[y[i]].push_back(i);
  
  for(auto p : mp) {    
    //y‚²‚Æ‚Ìi‚ğŠÇ—    
    vector<int> ids = p.second;
    
    vector<pair<int,char>> pt;
    //i‚²‚Æ‚Ìx‚ÆŒü‚«
    for(auto i : ids) {
      pt.push_back(make_pair(x[i], s[i]));
    }
    sort(pt.begin(), pt.end());
    
    int len = pt.size();
    rep(i,len-1) {
      if(pt[i].second == 'R' && pt[i+1].second == 'L') {
        cout << "Yes"<<endl;
        return 0;
      }
    }
  }
  cout<<"No"<<endl;
  
}