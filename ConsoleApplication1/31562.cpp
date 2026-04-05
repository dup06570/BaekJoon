//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <map>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int n, m;
//	cin >> n >> m;
//	map<string, string> songMap;
//	for (int i = 0; i < n; i++) {
//		int num;
//		string name;
//		cin >> num >> name;
//		string a, b, c;
//		cin >> a >> b >> c;
//		for (int j = 3; j < 7; j++) {
//			string t;
//			//cout << 1 << '\n';
//			cin >> t;
//		}
//
//		string key = a + " " + b + " " + c;
//		if (songMap.find(key) == songMap.end()) {
//			songMap[key] = name;
//		}
//		else {
//			songMap[key] = "?";
//		}
//	}
//
//	for (int i = 0; i < m; i++) {
//		string a, b, c;
//		cin >> a >> b >> c;
//
//		string key = a + " " + b + " " + c;
//
//		if (songMap.find(key) == songMap.end()) {
//			cout << "!" << '\n';
//		}
//		else {
//			cout << songMap[key] << '\n';
//		}
//	}
//}