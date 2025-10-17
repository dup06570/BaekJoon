//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <queue>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	queue<int> Q;
//	int size;
//	cin >> size;
//
//	for (int i = 0; i < size; i++) {
//		string input;
//		cin >> input;
//		if (input == "push") {
//			int input1;
//			cin >> input1;
//			Q.push(input1);
//		}
//		else if (input == "pop") {
//			if (Q.size() == 0) {
//				cout << -1 << '\n';
//			}
//			else {
//				cout << Q.front() << '\n';
//				Q.pop();
//			}
//		}
//		else if (input == "size") {
//			cout << Q.size() << '\n';
//		}
//		else if (input == "empty") {
//			if (Q.size() == 0) {
//				cout << 1 << '\n';
//			}
//			else {
//				cout << 0 << '\n';
//			}
//		}
//		else if (input == "front") {
//			if (Q.size() == 0) {
//				cout << -1 << '\n';
//			}
//			else {
//				cout << Q.front() << '\n';
//			}
//		}
//		else if (input == "back") {
//			if (Q.size() == 0) {
//				cout << -1 << '\n';
//			}
//			else {
//				cout << Q.back() << '\n';
//			}
//		}
//	}
//}