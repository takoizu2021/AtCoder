#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^9
using ll = long long;

//3.A の各要素を空白区切りで出力する。
void pri(int n, vector<int> a) {
	rep(i,n) {
		cout<<a[i];
		if(i!=n-1) cout<<" ";
		else cout<<endl;
	}
	return;
}

int main() {
	int n;
	cin>>n;
	vector<int> a(n);
	rep(i,n) cin>>a[i];

	int mn,it;

	rep(i,n-1) {
	  mn=inf;
	  it=n;
	  //1.A[k],A[k+1],?,A[N?1] のうち値が最も小さい要素を 1 つを選択する。
	  // ただし、該当する要素が複数ある場合はそのうち最も前にある要素を選択する。
	  rep2(j,i,n) {
	    if(mn>a[j]) {
	      mn=a[j];
		  it=j;
	    }
	  }
	  //2.A[k] と選んだ要素を交換する。
	  swap(a[i],a[it]);
	  
	  //3.A の各要素を空白区切りで出力する。
	  pri(n,a);
	  //cout<<"mn"<<":"<<mn<<":"<<"it"<<it<<endl;
	}

	return 0;
}