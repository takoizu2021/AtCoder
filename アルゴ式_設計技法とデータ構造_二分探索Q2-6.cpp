#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
const long long inf = 10000000000000; //10^13

int main() {
	int n,k; cin>>n>>k;
	vector<int> a(n);
	for(int i=0; i<n; ++i) cin>>a[i];

	sort(a.begin(), a.end());

	long long count=0;
	for(int i=0; i<n; ++i) {
		int left=0, right=n;
		while(left!=right) {
			int mid = (left+right) / 2;;
			if(a[mid] >= k-a[i] ) { // もし A[mid] >= k-a[i] ならば答えは left 以上 mid 以下
				right = mid; // 範囲を狭める
			}
			else { // そうでなければ答えは mid+1 以上 right 以下
				left = mid+1; // 範囲を狭める
			}
		}
		count += n-left;
	}

	cout << count << endl;
	return 0;
}