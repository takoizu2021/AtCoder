#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
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
			if(a[mid] >= k-a[i] ) { // ���� A[mid] >= k-a[i] �Ȃ�Γ����� left �ȏ� mid �ȉ�
				right = mid; // �͈͂����߂�
			}
			else { // �����łȂ���Γ����� mid+1 �ȏ� right �ȉ�
				left = mid+1; // �͈͂����߂�
			}
		}
		count += n-left;
	}

	cout << count << endl;
	return 0;
}