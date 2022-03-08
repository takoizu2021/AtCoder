#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^9
using ll = long long;

void pri(int n, vector<int> a) {
	rep(i,n) {
		cout<<a[i];
		if(i!=n-1) cout<<" ";
		else cout<<endl;
	}
	return;
}

vector<int> quick (vector<int> a) {
	//ベースケース
	if(a.empty()) return a;
	
	//0 以上 N?1 以下の整数 X を無作為に選び、 A[X] を軸としてソートを行う。
    //1.空の配列 L,R を用意し、次の操作を i=0,1,?,N?1 について行う。 
	int n = a.size();
	vector<int> l,r;

    //0~n-1の範囲指定乱数生成
    random_device rnd;  // 非決定的な乱数生成器を生成
    mt19937_64 mt(rnd());   //メルセンヌ・ツイスタの32ビット版、引数は初期シード値
    uniform_int_distribution<> rand100 (0,n-1);  //[0, 99] 範囲の一様乱数
    int x = rand100(mt);
	rep(i,n) {
	  //1-1.i=X ならば何も行わない。
	  //1-2.i!=X かつ A[i]<A[X] ならば A[i] を L の末尾に追加する。
	  if(i!=x && a[i]<a[x]) l.push_back(a[i]);
	  //1-3.i!=X かつ A[i]>A[X] ならば A[i] を R の末尾に追加する。
	  if(i!=x && a[i]>a[x]) r.push_back(a[i]);
      //i-4.i!=X かつ A[i]=A[X] ならば A[i] を L,R のどちらかの末尾にランダムに追加する。
      if(i!=x && a[i]==a[x]) {
        uniform_int_distribution<> coin (0,1); //[0, 1] 範囲の一様乱数
        if(coin(mt)) l.push_back(a[i]);
        else r.push_back(a[i]);
      }

	}
	//2.L,R をクイックソートを用いて再帰的にソートする。空配列の場合は何も行わない。
	l = quick(l);
	r = quick(r);

	//3.L の要素, A[X], R の要素をこの順につなげてできる配列を出力する。    
	l.push_back(a[x]);
	l.insert(l.end(), r.begin(), r.end());
	return l;
}

int main() {
    int n;
    cin>>n;
	vector<int> a(n);
    rep(i,n) cin>>a[i];

	a = quick(a);
    
	pri(n,a);	
	return 0;
}