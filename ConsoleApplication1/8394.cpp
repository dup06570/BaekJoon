//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int count;
//	cin >> count;
//	vector<int> v(count + 1);
//	v[1] = 1;
//	v[0] = 1;
//	for (int i = 2; i <= count; i++) {
//		v[i] = (v[i - 1] + v[i - 2]) % 10;
//	}
//	cout << v[count];
//	
//}