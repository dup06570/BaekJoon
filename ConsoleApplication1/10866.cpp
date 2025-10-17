//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	vector<int>Q;
//	int count;
//	cin >> count;
//	for (int i = 0; i < count; i++) {
//		string input;
//		cin >> input;
//		if (input == "push_front") {
//			int input1;
//			cin >> input1;
//			Q.insert(Q.begin(), input1);
//		}
//		else if (input == "push_back") {
//			int input1;
//			cin >> input1;
//			Q.push_back(input1);
//		}
//		else if (input == "pop_front") {
//			if (Q.empty()) cout << -1 << '\n';
//			else {
//				cout << Q.front() << '\n';
//				Q.erase(Q.begin());
//			}
//			
//		}
//		else if (input == "pop_back") {
//			if (Q.empty()) cout << -1 << '\n';
//			else {
//				cout << Q.back() << '\n';
//				Q.pop_back();
//			}
//			
//		}
//		else if (input == "size") {
//			cout << Q.size() << '\n';
//		}
//		else if (input == "back") {
//			if (Q.empty()) cout << -1 << '\n';
//			else cout << Q.back() << '\n';
//		}
//		else if (input == "empty") {
//			if (Q.empty()) {
//				cout << 1 << '\n';
//			}
//			else {
//				cout << 0 << '\n';
//			}
//		}
//		else if (input == "front") {
//			if (Q.empty())cout << -1 << '\n';
//			else cout << Q.front() << '\n';
//		}
//	}
//}