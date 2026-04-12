//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int N, M;
//vector<int> a;
//int answer = 0;
//
//void dfs(int idx, int size, int time) {
//    if (time > M) return;
//
//    answer = max(answer, size);
//
//    // 이미 끝에 도달한 경우
//    if (idx >= N) return;
//
//    // 1칸 굴리기
//    if (idx + 1 <= N) {
//        dfs(idx + 1, size + a[idx + 1], time + 1);
//    }
//
//    // 2칸 던지기
//    if (idx + 2 <= N) {
//        dfs(idx + 2, size / 2 + a[idx + 2], time + 1);
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    cin >> N >> M;
//    a.resize(N + 1);
//
//    for (int i = 1; i <= N; i++) {
//        cin >> a[i];
//    }
//
//    dfs(0, 1, 0);
//
//    cout << answer;
//    return 0;
//}
