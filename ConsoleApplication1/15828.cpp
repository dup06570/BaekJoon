//#include <iostream>
//#include <algorithm>
//#include <queue>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int size;
//	cin >> size;
//	int input;
//	cin >> input;
//	queue<int> q;
//	while (input != -1) {
//		if (input == 0) {
//			if (!q.empty()) {
//				q.pop();
//			}
//		}
//		else {
//			if (q.size() < size) {
//				q.push(input);
//			}
//		}
//		cin >> input;
//	}
//	if (q.size() == 0) {
//		cout << "empty";
//	}
//	else {
//		while (q.size() != 0) {
//			cout << q.front() << " ";
//			q.pop();
//		}
//	}
//
//	
//}