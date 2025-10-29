//#include <iostream>
//#include <algorithm>
//#include <map>
//#include <stack>
//#include <string>
//#include <iomanip>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	stack<double> s;
//	map<char, int> m;
//	int count;
//	cin >> count;
//	string input;
//	cin >> input;
//	for (int i = 0; i < count; i++) {
//		int a;
//		cin >> a;
//		m[(char)('A' + i)] = a;
//	}
//
//	for (int i = 0; i < input.size(); i++) {
//		if (input[i] == '*' || input[i] == '-' || input[i] == '+' || input[i] == '/') {
//			double b = s.top();
//			s.pop();
//			double a = s.top();
//			s.pop();
//			double c = 0;
//			switch (input[i]) {
//			case '+':
//				c = a + b; break;
//			case '-':
//				c = a - b; break;
//			case '*':
//				c = a * b; break;
//			case '/':
//				c = a / b; break;
//			}
//			s.push(c);
//			//cout << c << " test " << '\n';
//		}
//		else {
//			s.push(m[input[i]]);
//		}
//	}
//	cout.setf(ios::fixed);
//	cout << setprecision(2) << s.top() << '\n';
//}