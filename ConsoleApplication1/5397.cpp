//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <stack>
//#include <vector>
//
//using namespace std;
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int count;
//	cin >> count;
//	for (int t = 0; t < count; t++) {
//		string input;
//		cin >> input;
//		stack<char>l;
//		stack<char>r;
//		for (char a : input) {
//			if (a == '<') {
//				if (l.empty())continue;
//				char b = l.top();
//				r.push(b);
//				l.pop();
//			}
//			else if (a == '>') {
//				if (r.empty())continue;
//				char b = r.top();
//				l.push(b);
//				r.pop();
//			}
//			else if (a == '-') {
//				if (!l.empty())l.pop();
//			}
//			else {
//				l.push(a);
//			}
//		}
//
//		while (!l.empty()) {
//			r.push(l.top());
//			l.pop();
//		}
//		string a = "";
//		while (!r.empty()) {
//			a += r.top();
//			r.pop();
//		}
//		cout << a << '\n';
//	}
//
//	
//
//}