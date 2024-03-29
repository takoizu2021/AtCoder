#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
const long long inf = 10000000000000; //10^13

int main() {
	int n,m; cin>>n>>m;
	vector<int> a(n), b(m);
	for(int i=0; i<n; ++i) cin>>a[i];
	for(int i=0; i<m; ++i) cin>>b[i];

	sort(a.begin(), a.end());

	for(int i=0; i<m; ++i) {
		int left=0, right=n;
		while(left!=right) {
			int mid=(left+right) / 2;
			if(a[mid] > b[i]) { //もし A[mid] > B[i] ならば答えは left 以上 mid 以下
				right = mid; //範囲を狭める
			}
			else { //そうでなければ答えは mid+1 以上 right 以下
				left = mid+1; //範囲を狭める
			}
		}

		int ans=left;
		cout<<ans<<endl;
	}
	
	return 0;
}