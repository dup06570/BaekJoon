//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int count;
//	cin >> count;
//
//	vector<long long int> v(count + 1);
//
//	v[0] = 0;
//	v[1] = 0;
//	v[2] = 1;
//	v[3] = 2;
//
//
//	for (int i = 4; i <= count; i++) {
//		v[i] = v[i - 1] + v[i - 2];
//	}
//	cout << v[count] << " " << count - 2;
//}