#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// ����
int N, W;
int w[110], v[110];

// DP�e�[�u��
int dp[110][10010];

int main() {
  cin >> N >> W;
  for (int i = 0; i < N; ++i) cin >> w[i] >> v[i];

  // DP��������: dp[0][j] = 0
  for (int j = 0; j <= W; ++j) dp[0][j] = 0;

  // DP���[�v
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j <= W; ++j) {
      if (j >= w[i]) dp[i+1][j] = max(dp[i][j-w[i]] + v[i], dp[i][j]);
      else dp[i+1][j] = dp[i][j];
    }
  }
/*
  for (int i = 0; i <= N; ++i) {
    for (int j = 0; j <= W; ++j) {
    cout<<dp[i][j]<<" ";
    if(j==W)cout<<endl;
    }
  }
*/
  cout << dp[N][W] << endl;
}