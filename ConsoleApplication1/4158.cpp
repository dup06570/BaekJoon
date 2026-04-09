//#include <iostream>
//#include <algorithm>
//#include <map>
//#include <vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	long long int x, y;
//	cin >> x >> y;
//	while (x != 0 && y != 0) {
//		vector<int>v;
//		int count = 0;
//		for (int i = 0; i < x; i++) {
//			int input;
//			cin >> input;
//			v.push_back(input);
//		}
//		int index = 0;
//		for (int i = 0; i < y; i++) {
//			int input;
//			cin >> input;
//			while (index < v.size()) {
//				if (v[index] == input) { count += 1; index += 1; break; }
//				if (v[index] > input) { break; }
//				index += 1;
//			}
//		}
//
//		cout << count << '\n';
//		cin >> x >> y;
//	}
//	
//}