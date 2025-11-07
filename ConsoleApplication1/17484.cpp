//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <array>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//    int N, M;
//    cin >> N >> M;
//    vector<vector<int>> a(N, vector<int>(M));
//    for (int i = 0; i < N; ++i)
//        for (int j = 0; j < M; ++j)
//            cin >> a[i][j];
//
//    const int INF = 1e9;
//    // dp[r][c][d]: r,c에 d방향으로 도착했을 때 최소 비용
//    // d: 0=왼아래(-1), 1=아래(0), 2=오아래(+1)
//    vector<vector<array<int, 3>>> dp(N, vector<array<int, 3>>(M, { INF, INF, INF }));
//
//    // 첫 행 초기화: '이전 방향 없음'을 3개 복제로 처리
//    for (int c = 0; c < M; ++c)
//        dp[0][c] = { a[0][c], a[0][c], a[0][c] };
//
//    int dx[3] = { -1, 0, 1 };
//
//    for (int r = 1; r < N; ++r) {
//        for (int c = 0; c < M; ++c) {
//            for (int d = 0; d < 3; ++d) {
//                int pc = c - dx[d]; // 이전 열
//                if (pc < 0 || pc >= M) continue;
//                for (int prev = 0; prev < 3; ++prev) {
//                    if (prev == d) continue; // 연속 같은 방향 금지
//                    dp[r][c][d] = min(dp[r][c][d], dp[r - 1][pc][prev] + a[r][c]);
//                }
//            }
//        }
//    }
//
//    int ans = INF;
//    for (int c = 0; c < M; ++c)
//        for (int d = 0; d < 3; ++d)
//            ans = min(ans, dp[N - 1][c][d]);
//
//    cout << ans << '\n';
//
//}