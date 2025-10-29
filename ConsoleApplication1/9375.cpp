//#include <map>
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int test;
//	cin >> test;
//	for (int i = 0; i < test; i++) {
//		map<string, int>m;
//		int count;
//		cin >> count;
//		vector<int> v;
//		for (int j = 0; j < count; j++) {
//			string name;
//			string type;
//			cin >> name >> type;
//			m[type] += 1;
//		}
//
//		int answer = 1;
//		for (auto it = m.begin(); it != m.end(); it++) {
//			v.push_back(it->second);
//			answer *= (it->second + 1);
//		}
//		cout << answer - 1 << '\n';
//	}
//
//	
//
//}