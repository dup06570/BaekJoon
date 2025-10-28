//#include <iostream>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	map<long long int, long long int> m_;
//	int count;
//	int max = 0;
//	cin >> count;
//	for (int i = 0; i < count; i++) {
//		long long int input;
//		cin >> input;
//		int a = ++m_[input];
//		if (a > max) max = a;
//	}
//	for (auto a = m_.begin(); a != m_.end(); a++) {
//		if (a->second == max) {
//			cout << a->first;
//			break;
//		}
//	}
//}