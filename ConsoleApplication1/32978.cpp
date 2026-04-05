//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <map>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	map<string, int> m;
//	int size;
//	cin >> size;
//	for (int i = 0; i < size; i++) {
//		string input;
//		cin >> input;
//		m[input] = 0;
//	}
//	for (int i = 0; i < size - 1; i++) {
//		string input;
//		cin >> input;
//		m[input] += 1;
//	}
//	for (auto it = m.begin(); it != m.end(); it++) {
//		if (it->second == 0) { cout << it->first; break; }
//	}
//
//}