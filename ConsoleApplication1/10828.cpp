//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <stack>
//#include <string>
//
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int Count;
//	cin >> Count;
//
//	stack<int> Stack;
//
//	for (int i = 0; i < Count; i++) {
//		string Input;
//		cin >> Input;
//		if (Input == "push") {
//			int Input1;
//			cin >> Input1;
//			Stack.push(Input1);
//		}
//		else if (Input == "top") {
//			if (Stack.size() == 0) {
//				cout << -1 << '\n';
//			}
//			else {
//				cout << Stack.top() << '\n';
//			}
//			
//		}
//		else if (Input == "size") {
//			cout << Stack.size() <<'\n';
//		}
//		else if (Input == "empty") {
//			if (Stack.size() == 0) {
//				cout << 1 << '\n';
//			}
//			else {
//				cout << 0 << '\n';
//			}
//		}
//		else if (Input == "pop") {
//			if (Stack.size() == 0) {
//				cout << -1 << '\n';
//			}
//			else {
//				cout << Stack.top() << '\n';
//				Stack.pop();
//			}
//		}
//	}
//}