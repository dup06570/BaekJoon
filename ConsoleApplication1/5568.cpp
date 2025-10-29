//#include <iostream>
//#include <algorithm>
//#include <unordered_set>
//#include <string>
//using namespace std;
//
//int n;
//int k;
//vector<int> v1;
//vector<bool> v2;
//unordered_set<string> set;
//
//void def(int dep, string s) {
//	if (dep == k) {
//		set.insert(s);
//		return;
//	}
//	for (int i = 0; i < n; i++) {
//		if (v2[i]) { continue; }
//		v2[i] = true;
//		def(dep + 1, s + to_string(v1[i]));
//		v2[i] = false;
//	}
//	return;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	
//	cin >> n >> k;
//	v1.resize(n);
//	v2.assign(n, false);
//	for (int i = 0; i < n; i++)cin >> v1[i];
//	def(0, "");
//
//	cout << set.size();
//}