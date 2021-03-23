#include <bits/stdc++.h>
using namespace std;

int main() { 
  vector<int> count(26);
  
  char ch;
  while(cin >> ch) {
    if('A' <= ch && ch <= 'Z') {
      ch += 32;
    }
    int num = ch - 'a';
    if(0 <= num && num <= 25) {
      count[num]++;
    }
  }
  
  for(int i=0; i <= 25; i++) {
    char a = 'a'+i;
    cout<<a<<" : "<<count[i]<<endl;
  }
}