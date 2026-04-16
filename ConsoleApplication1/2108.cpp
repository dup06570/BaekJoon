//#include <iostream>
//#include <algorithm>
//#include <cmath>
//#include <vector>
//using namespace std;
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int n;
//    cin >> n;
//
//    vector<int> v(n);
//    vector<int> cnt(8001, 0);
//
//    long long sum = 0;
//
//    for (int i = 0; i < n; i++) {
//        cin >> v[i];
//        sum += v[i];
//        cnt[v[i] + 4000]++;
//    }
//
//    sort(v.begin(), v.end());
//
//    // 1. 산술평균
//    int avg = (int)round((double)sum / n);
//    if (avg == -0) avg = 0;
//
//    // 2. 중앙값
//    int mid = v[n / 2];
//
//    // 3. 최빈값
//    int maxFreq = 0;
//    for (int i = 0; i < 8001; i++) {
//        maxFreq = max(maxFreq, cnt[i]);
//    }
//
//    vector<int> modes;
//    for (int i = 0; i < 8001; i++) {
//        if (cnt[i] == maxFreq) {
//            modes.push_back(i - 4000);
//        }
//    }
//
//    int mode;
//    if (modes.size() == 1) mode = modes[0];
//    else mode = modes[1];  // 두 번째로 작은 값
//
//    // 4. 범위
//    int range = v[n - 1] - v[0];
//
//    cout << avg << '\n';
//    cout << mid << '\n';
//    cout << mode << '\n';
//    cout << range << '\n';
//
//    return 0;
//}