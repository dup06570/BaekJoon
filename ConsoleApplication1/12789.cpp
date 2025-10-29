//#include <iostream>
//#include <algorithm>
//#include <stack>
//
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int count;
//	cin >> count;
//	stack<int> s;
//	int index = 1;
//	bool b = false;
//	for (int i = 0; i < count; i++) {
//		while (!s.empty() && s.top() == index) {
//			index += 1;
//			s.pop();
//		}
//		int input;
//		cin >> input;
//		if (input == index) {
//			index += 1;
//			continue;
//		}
//		
//		s.push(input);
//
//
//	}
//
//
//	while (!s.empty() && s.top() == index) {
//		index += 1;
//		s.pop();
//	}
//	if (s.empty()) { cout << "Nice" << '\n'; return 0; }
//	cout << "Sad" << '\n';
//
//	
//}