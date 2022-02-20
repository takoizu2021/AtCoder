#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;
//Å‘åŒö–ñ” gcd(A,B)

int main() {
  int n;
  cin>>n;
  vector<pair<int,int>> a(1);
  //cout<<a.back().first;
  
  int ct=0;
  rep(i,n) {
    ++ct;
    int x;
    cin>>x;
    if(a.back().first==x) {
      if(a.back().second+1==x) {
        a.pop_back();
        ct -= x;
      }
      else a.back().second++;
    }
    else {
      a.push_back(make_pair(x,1));
    }    
    //cout<<a.back().first<<" "<<a.back().second<<":"<<ct<<endl;
    cout<<ct<<endl;
  }
}