//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int A;
//	int K;
//	cin >> A >> K;
//
//	vector<int> v(K + 1, -1);
//
//	v[A] = 0;
//	for (int i = A + 1; i <= K; i++) {
//		int a = 99999999;
//		int b = 99999999;
//		if (i / 2 >= 1 && v[i / 2] != -1 && i % 2 != 1) {
//			a = v[i / 2] + 1;
//		}
//		if (i - 1 >= 1 && v[i - 1] != -1) {
//			b = v[i - 1] + 1;
//		}
//		v[i] = min(a, b);
//	}
//	cout << v[K];
//}