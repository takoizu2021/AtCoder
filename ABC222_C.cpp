#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000;
using ll = long long;

int main() {
  int n,m;
  cin>>n>>m;
  
  vector<string> a(2*n);
  for(int j=0; j<2*n; ++j) cin>>a[j];
  
  //順位を管理する配列、<0>勝数（勝つほど減る）<1>2:id、<2>:順位
  vector<tuple<int,int,int> > jun (2*n); 
  //初期設定　<0>勝数=0、<1>id = <2>順位 = i+1
  for(int i=0; i<2*n; ++i)  get<1>(jun[i]) = get<2>(jun[i]) = i;
  
  //for(int j=1; j<2*n; j+=2)  cout<<j<<":"<<j-1<<endl;
  
  for(int i=0; i<m; ++i) {
    for(int j=1; j<2*n; j+=2) { //上の順位から勝敗を見ていく
      if((a[ get<1>(jun[j]) ][i]=='G'&&a[ get<1>(jun[j-1]) ][i]=='C') ||
         (a[ get<1>(jun[j]) ][i]=='C'&&a[ get<1>(jun[j-1]) ][i]=='P') ||
         (a[ get<1>(jun[j]) ][i]=='P'&&a[ get<1>(jun[j-1]) ][i]=='G')   ) 
         get<0>(jun[j])--; //勝ったidの勝ち数を反映
      
      if((a[ get<1>(jun[j-1]) ][i]=='G'&&a[ get<1>(jun[j]) ][i]=='C') ||
         (a[ get<1>(jun[j-1]) ][i]=='C'&&a[ get<1>(jun[j]) ][i]=='P') ||
         (a[ get<1>(jun[j-1]) ][i]=='P'&&a[ get<1>(jun[j]) ][i]=='G')   )
         get<0>(jun[j-1])--; //勝ったidの勝ち数を反映
    }  
    //i回戦終了ごとにソートする（勝数順、勝数が同じならidが若い順にソートされる）  
      sort(jun.begin(), jun.end());
    //順位を更新
  	for(int i=0; i<2*n; ++i) get<2>(jun[i]) = i;    
  }
  
  for(auto t : jun) {    
    int id   = get<1>(t); //idを取得
    int rank = get<2>(t); //順位を取得
    get<0>(t) = id;  //勝ち星をidに上書き
    get<1>(t) = rank; //idを順位に上書き
  }
  
  //id順でソート
  sort(jun.begin(), jun.end());
  
  for(int i=0; i<2*n; ++i) {
    ++get<1>(jun[i]);
    cout<<get<1>(jun[i])<<endl;
  }
}