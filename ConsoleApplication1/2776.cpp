//#include <iostream>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	
//	int testCase;
//	cin >> testCase;
//	for (int k = 0; k < testCase; k++) {
//		map<long long int, bool> m;
//		long long int count;
//		cin >> count;
//		for (int i = 0; i < count; i++) {
//			int a;
//			cin >> a;
//			m[a] = true;
//		}
//
//		cin >> count;
//		for (int i = 0; i < count; i++) {
//			int a;
//			cin >> a;
//			if (m[a]) {
//				cout << 1 << '\n';
//			}
//			else {
//				cout << 0 << '\n';
//			}
//		}
//	}
//}