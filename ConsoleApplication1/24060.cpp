//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//vector<int> a, tmp;
//int n, k;
//int cnt = 0;
//int answer = -1;
//
//void merge_sort(int left, int right);
//void merge_arr(int left, int mid, int right);
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    cin >> n >> k;
//    a.resize(n);
//    tmp.resize(n);
//
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//
//    merge_sort(0, n - 1);
//
//    cout << answer;
//    return 0;
//}
//
//void merge_sort(int left, int right) {
//    if (left >= right) return;
//
//    int mid = (left + right) / 2;
//    merge_sort(left, mid);
//    merge_sort(mid + 1, right);
//    merge_arr(left, mid, right);
//}
//
//void merge_arr(int left, int mid, int right) {
//    int i = left;
//    int j = mid + 1;
//    int t = left;
//
//    while (i <= mid && j <= right) {
//        if (a[i] <= a[j]) tmp[t++] = a[i++];
//        else tmp[t++] = a[j++];
//    }
//
//    while (i <= mid) tmp[t++] = a[i++];
//    while (j <= right) tmp[t++] = a[j++];
//
//    for (int x = left; x <= right; x++) {
//        a[x] = tmp[x];
//        cnt++;
//        if (cnt == k) {
//            answer = a[x];
//        }
//    }
//}