//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
//
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//    int N;
//    int mx;
//    if (!(cin >> N)) return 0;
//    cin >> mx;
//    unordered_map<long long, int> cnt;     // 값 -> 빈도
//    unordered_map<long long, int> first;   // 값 -> 첫 등장 인덱스(필요시 사용)
//    vector<long long> order;               // 처음 등장한 값들을 "등장 순서대로" 보관
//
//    cnt.reserve(N * 2);
//    first.reserve(N * 2);
//    order.reserve(N);
//
//    int seen = 0;
//    for (int i = 0; i < N; ++i) {
//        long long x;
//        cin >> x;
//        auto it = cnt.find(x);
//        if (it == cnt.end()) {
//            cnt[x] = 1;
//            first[x] = seen++;      // 첫 등장 순서 기록(동률 타이브레이커)
//            order.push_back(x);     // 유니크 값만 등장 순서대로 저장
//        }
//        else {
//            it->second++;
//        }
//    }
//
//    stable_sort(order.begin(), order.end(), [&](long long a, long long b) {return cnt[a] > cnt[b]; });
//
//    bool first_out = true;
//    for (long long v : order) {
//        for (int k = 0; k < cnt[v]; ++k) {
//            if (!first_out) cout << ' ';
//            cout << v;
//            first_out = false;
//        }
//    }
//}