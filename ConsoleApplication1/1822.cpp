//#include <iostream>
//#include <algorithm>
//#include <map>
//#include <vector>
//
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	map<int, bool> m;
//	int size;
//	int b;
//	cin >> size;
//	cin >> b;
//	for (int i = 0; i < size; i++) {
//		int a;
//		cin >> a;
//		m[a] = true;
//	}
//	for (int i = 0; i < b; i++) {
//		int a;
//		cin >> a;
//		m[a] = false;
//	}
//
//	int count = 0;
//	vector<int> v;
//	for (auto a = m.begin(); a != m.end(); a++) {
//		if (a->second) { count += 1; v.push_back(a->first); }
//	}
//	sort(v.begin(), v.end());
//
//	cout << count << '\n';
//	if (count != 0) {
//		for (int i = 0; i < v.size(); i++) {
//			cout << v[i] << " ";
//		}
//	}
//}