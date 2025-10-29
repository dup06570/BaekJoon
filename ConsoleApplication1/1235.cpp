//#include <iostream>
//#include <algorithm>
//#include <unordered_set>
//#include <vector>
//#include <string>
//
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int t;
//	int a;
//	cin >> t;
//	vector<string> v;
//	for (int k = 0; k < t; k++) {
//		string input;
//		cin >> input;
//		a = input.size();
//		reverse(input.begin(), input.end());
//		v.push_back(input);
//	}
//
//	for (int i = 0; i < a; i++) {
//		unordered_set<string> s;
//		bool check = false;
//		for (int j = 0; j < v.size(); j++) {
//			string p = "";
//			for (int d = 0; d <= i; d++) {
//				p += v[j][d];
//			}
//			auto it = s.find(p);
//			if (it != s.end()) {
//				check = true;
//				break;
//			}
//			else {
//				s.insert(p);
//			}
//		}
//
//		if (!check) { cout << i + 1 << '\n'; break; }
//	}
//
//}