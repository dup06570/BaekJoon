//#include <iostream>
//#include <algorithm>
//#include <unordered_set>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int c;
//	cin >> c;
//	unordered_set<string> s;
//	string answer = "";
//	for (int i = 0; i < c; i++) {
//		string input;
//		cin >> input;
//		auto it = s.find(input);
//		if (it != s.end()) {
//			answer = input;
//		}
//		else {
//			s.insert(input);
//		}
//		
//		reverse(input.begin(), input.end());
//		it = s.find(input);
//		if (it != s.end()) {
//			answer = input;
//		}
//		else {
//			s.insert(input);
//		}
//
//	}
//
//	cout << answer.size() << " " << answer[answer.size() / 2];
//}