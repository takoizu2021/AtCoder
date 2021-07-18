#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {  
  string sa,sb,sc;
  cin>>sa>>sb>>sc;
  
  string ans = "un", turn="a";
  while(ans == "un") {
    //aターン
    if(turn == "a") {
      if(sa == "") {
        ans = "A";
        break;
      }
      else if(sa[0] == 'a') {
        turn = "a";
        sa.erase(0,1);        
      }
      else if(sa[0] == 'b') {
        turn = "b";
        sa.erase(0,1);        
      }
      else if(sa[0] == 'c') {
        turn = "c";
        sa.erase(0,1);        
      }      
    }
    //bターン
    if(turn == "b") {
      if(sb == "") {
        ans = "B";
        break;
      }
      else if(sb[0] == 'a') {
        turn = "a";
        sb.erase(0,1);        
      }
      else if(sb[0] == 'b') {
        turn = "b";
        sb.erase(0,1);        
      }
      else if(sb[0] == 'c') {
        turn = "c";
        sb.erase(0,1);        
      }
    }
    //cターン
    if(turn == "c") {
      if(sc == "") {
        ans = "C";
        break;
      }
      else if(sc[0] == 'a') {
        turn = "a";
        sc.erase(0,1);        
      }
      else if(sc[0] == 'b') {
        turn = "b";
        sc.erase(0,1);        
      }
      else if(sc[0] == 'c') {
        turn = "c";
        sc.erase(0,1);        
      }
    }
  }
  cout<<ans<<endl;
}