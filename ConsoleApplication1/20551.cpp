//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <map>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int c1;
//	int c2;
//	cin >> c1 >> c2;
//	map<long long, int>m;
//	vector<long long> v(c1, 0);
//	for (int i = 0; i < c1; i++) {
//		cin >> v[i];
//		
//	}
//	sort(v.begin(), v.end());
//	for (int i = 0; i < c1; i++) {
//		if (m[v[i]] == 0) { m[v[i]] = i + 1; }
//	}
//	
//	
//	
//	for (int i = 0; i < c2; i++) {
//		int input;
//		cin >> input;
//		if (m[input] == 0) { cout << -1 << '\n'; }
//		else { cout << m[input] - 1 << '\n'; }
//	}
//
//}