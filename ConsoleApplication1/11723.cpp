//#include <iostream>
//#include <algorithm>
//#include <map>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int input;
//	cin >> input;
//	map<int, int>m;
//
//	for (int i = 0; i < input; i++) {
//		string n;
//		cin >> n;
//		if (n == "add") {
//			int a;
//			cin >> a;
//			if (m[a] == 0) {
//				m[a] = 1;
//			}
//		}
//		else if (n == "remove") {
//			int a;
//			cin >> a;
//			if (m[a] == 1) {
//				m[a] = 0;
//			}
//		}
//		else if (n == "check") {
//			int a;
//			cin >> a;
//			if (m[a] == 1) {
//				cout << 1 << '\n';
//			}
//			else {
//				cout << 0 << '\n';
//			}
//		}
//		else if (n == "toggle") {
//			int a;
//			cin >> a;
//			if (m[a] == 0) {
//				m[a] = 1;
//			}
//			else { m[a] = 0; }
//		}
//		else if (n == "all") {
//			for (int j = 1; j <= 20; j++) {
//				m[j] = 1;
//			}
//		}
//		else if (n == "empty") {
//			for (int j = 1; j <= 20; j++) {
//				m[j] = 0;
//			}
//		}
//	}
//}