//#include <iostream>
//#include <algorithm>
//#include <stack>
//#include <vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	
//	stack<int> s;
//	int input;
//	cin >> input;
//	for (int i = 1; i <= input; i++) {
//		int count;
//		cin >> count;
//		stack<int> s_;
//		for (int j = 0; j < count; j++) {
//			s_.push(s.top());
//			s.pop();
//		}
//		s.push(i);
//		while (!s_.empty()) {
//			s.push(s_.top());
//			s_.pop();
//		}
//	}
//
//	vector<int>v;
//	while (!s.empty()) {
//		v.push_back(s.top());
//		s.pop();
//	}
//	for (int i = v.size() - 1; i >= 0; i--) {
//		cout << v[i] << " ";
//	}
//	
//}