//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int line;
//	cin >> line;
//
//	for (int i = 0; i < line; i++) {
//		string s;
//		getline(cin, s);
//		if(s.length() == 0){ getline(cin, s); }
//		string a = "";
//		vector<string> v;
//		for (int j = 0; j < s.length(); j++) {
//			if (s[j] == ' ') {
//				v.push_back(a);
//				a = "";
//			}
//			else if (j == s.length() - 1) {
//				a += s[j];
//				v.push_back(a);
//			}
//			else {
//				a += s[j];
//			}
//		}
//
//		for (int j = 0; j < v.size(); j++) {
//			for (int k = v[j].length() - 1; k >= 0; k--) {
//				cout << v[j][k];
//			}
//			cout << ' ';
//		}
//		cout << '\n';
//	}
//}