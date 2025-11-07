//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	long long int count;
//	cin >> count;
//	vector<long long int> v(count + 1);
//	if (count == 0) {
//		cout << 1;
//		return 0;
//	}
//	v[0] = 1;
//	if (count == 1) {
//		cout << 1;
//		return 0;
//	}
//	v[1] = 1;
//	if (count == 2) {
//		cout << 3;
//		return 0;
//	}
//	v[2] = 3;
//	for (long long int i = 3; i <= count; i++) {
//		v[i] = (v[i - 1] + v[i - 2] + 1) % 1000000007;
//	}
//	cout << v[count];
//}