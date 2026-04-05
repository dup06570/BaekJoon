//#include <iostream>
//#include <algorithm>
//#include <stack>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	stack<int> s;
//	int count;
//	cin >> count;
//	for (int i = 0; i < count; i++) {
//		int input;
//		cin >> input;
//		s.push(input);
//	}
//	int mx = 0;
//	int mxC = 0;
//	while (!s.empty()) {
//		int a = s.top();
//		if (a > mx) {
//			mx = a;
//			mxC += 1;
//		}
//		s.pop();
//	}
//	cout << mxC;
//
//}