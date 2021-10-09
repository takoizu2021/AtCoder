#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
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
			if(a[mid] > b[i]) { //���� A[mid] > B[i] �Ȃ�Γ����� left �ȏ� mid �ȉ�
				right = mid; //�͈͂����߂�
			}
			else { //�����łȂ���Γ����� mid+1 �ȏ� right �ȉ�
				left = mid+1; //�͈͂����߂�
			}
		}

		int ans=left;
		cout<<ans<<endl;
	}
	
	return 0;
}