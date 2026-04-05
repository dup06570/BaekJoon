//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_set>
//#include <vector>
//using namespace std;
//
//static bool Check(long long x) {
//	if (x <= 0)return false;
//	while (x > 0) {
//		int d = (int)(x % 10);
//		if (d != 5 && d != 8)return false;
//		x /= 10;
//	}
//	return true;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	
//	int T;
//	cin >> T;
//	while (T--) {
//		int n, m, k;
//		cin >> n;
//		vector<long long> v(n);
//		for (auto& x : v) cin >> x;
//		cin >> m;
//		vector<long long> v_(m);
//		for (auto& x : v_) cin >> x;
//		cin >> k;
//		vector<long long> v__(k);
//		for (auto& x : v__)cin >> x;
//		unordered_set<long long> s;
//		s.reserve((size_t)n * m); 
//
//		for (long long a : v) {
//			for (long long b : v_) {
//				for (long long c : v__) {
//					long long sum = a + b + c;
//					if (Check(sum)) s.insert(sum);
//				}
//			}
//		}
//
//		cout << s.size() << "\n";
//	}
//}