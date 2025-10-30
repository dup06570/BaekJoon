//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <map>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	map<string, int> m;
//	int count;
//	cin >> count;
//	for (int i = 0; i < count; i++) {
//		string input;
//		cin >> input;
//		string a = "";
//		bool b = false;
//		for (int j = 0; j < input.size(); j++) {
//			if (b) { a += input[j]; }
//			if (input[j] == '.') b = true;
//		}
//		m[a] += 1;
//	}
//
//	for (auto it = m.begin(); it != m.end(); it++) {
//		cout << it->first << " " << it->second << '\n';
//	}
//}