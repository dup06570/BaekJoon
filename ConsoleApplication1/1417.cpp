//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int count;
//	cin >> count;
//	vector<int> v(count-1);
//	int num;
//	cin >> num;
//	if (count == 1) { cout << 0; return 0; }
//	for (int i = 0; i < count- 1; i++) {
//		cin >> v[i];
//	}
//	sort(v.begin(), v.end());
//	count = 0;
//	while (num <= v[v.size() - 1]) {
//		v[v.size() - 1] -= 1;
//		num += 1;
//		count += 1;
//		sort(v.begin(), v.end());
//	}
//
//	cout << count;
//}