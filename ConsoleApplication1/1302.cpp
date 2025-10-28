//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <map>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	map<string, int> map_;
//	int max = 0;
//	int count;
//	cin >> count;
//	for (int i = 0; i < count; i++) {
//		string input;
//		cin >> input;
//
//		auto answer = map_.find(input);
//		int c = ++map_[input];
//		if (max < c) {
//			max = c;
//		}
//	}
//
//	for (auto iter = map_.begin(); iter != map_.end(); iter++) {
//		if (iter->second == max) {
//			cout << iter->first << '\n';
//			break;
//		}
//	}
//
//	
//}