//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//static uint64_t abs_u64(long long x) {
//    return (x >= 0) ? (uint64_t)x : (uint64_t)(-(x + 1)) + 1;
//}
//
//// '절댓값 우선, 같으면 실제 값 작은 것(음수 우선)이 더 위'
//static bool less_abs(long long a, long long b) {
//    uint64_t aa = abs_u64(a), bb = abs_u64(b);
//    if (aa != bb) return aa < bb;
//    return a < b;
//}
//
//class Heap {
//public:
//    vector<long long> v;
//
//    void Push(long long value) {
//        v.push_back(value);
//        int i = (int)v.size() - 1;
//        // sift-up
//        while (i > 0) {
//            int p = (i - 1) / 2;
//            if (!less_abs(v[i], v[p])) break; // 부모가 더 '작거나 같으면' stop
//            swap(v[i], v[p]);
//            i = p;
//        }
//    }
//
//    void Pop() {
//        if (v.empty()) { cout << 0 << '\n'; return; }
//
//        cout << v[0] << '\n';           // 루트 출력
//        v[0] = v.back();
//        v.pop_back();
//
//        int n = (int)v.size();
//        if (n == 0) return;             // 방금 하나뿐이었다면 끝
//
//        int i = 0;
//        // sift-down
//        while (true) {
//            int l = 2 * i + 1;
//            int r = 2 * i + 2;
//            int best = i;
//
//            if (l < n && less_abs(v[l], v[best])) best = l;
//            if (r < n && less_abs(v[r], v[best])) best = r;
//
//            if (best == i) break;
//            swap(v[i], v[best]);
//            i = best;
//        }
//    }
//};
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int count;
//    cin >> count;
//
//    Heap h;
//    h.v.reserve(count); // 미세 최적화
//
//    for (int i = 0; i < count; i++) {
//        long long x;
//        cin >> x;
//        if (x == 0) h.Pop();
//        else h.Push(x);
//    }
//    return 0;
//}