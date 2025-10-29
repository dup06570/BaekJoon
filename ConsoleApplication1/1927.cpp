//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//struct MinHeap {
//    vector<unsigned int> a; // 0-based
//
//    void push(unsigned int x) {
//        a.push_back(x);
//        size_t i = a.size() - 1;
//        while (i > 0) {
//            size_t p = (i - 1) / 2;
//            if (a[p] <= a[i]) break;
//            swap(a[p], a[i]);
//            i = p;
//        }
//    }
//
//    bool empty() const { return a.empty(); }
//
//    unsigned int top() const { return a.front(); }
//
//    void pop() {
//        if (a.empty()) return;
//        a[0] = a.back();
//        a.pop_back();
//        size_t i = 0, n = a.size();
//        while (true) {
//            size_t l = 2 * i + 1, r = 2 * i + 2, s = i;
//            if (l < n && a[l] < a[s]) s = l;
//            if (r < n && a[r] < a[s]) s = r;
//            if (s == i) break;
//            swap(a[i], a[s]);
//            i = s;
//        }
//    }
//};
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int n;
//    cin >> n;
//    MinHeap h;
//
//    while (n--) {
//        unsigned int x;
//        cin >> x;
//        if (x == 0) {
//            if (h.empty()) cout << 0 << '\n';
//            else { cout << h.top() << '\n'; h.pop(); }
//        }
//        else {
//            h.push(x);
//        }
//    }
//    return 0;
//}