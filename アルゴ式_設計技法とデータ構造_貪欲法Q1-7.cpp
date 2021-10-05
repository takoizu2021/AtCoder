#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
const int inf = 1000000;

int main() {
	int n;
	cin>>n;
	vector<int> s(n), t(n);
	for(int i=0; i<n; ++i) cin>>s[i]>>t[i];

    //終了時刻 t が小さい順にidを並び替える
	vector<int> ids(n);
	for(int i=0; i<n; ++i) ids[i] = i;
	sort(ids.begin(), ids.end(), [&](int i, int j) {
		return t[i] < t[j];
	});

	//終了時刻が早い順に見ていく
	int res = 0;
	int last_time = 0; //前回の予定の終了時刻
	for (auto i:ids) {
		//予定 i の終了時刻が、前回終了時刻より早い場合はスキップ
		if(s[i] < last_time) continue;

		++res;
		last_time = t[i];
	}
	cout << res << endl;
	return 0;
}