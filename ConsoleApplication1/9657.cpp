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
//	vector<bool> v(count+1);
//
//	if (count >= 4) {
//		v[4] = true;
//	}
//	if (count >= 3) {
//		v[3] = true;
//	}if (count >= 1) {
//		v[1] = true;
//	}
//
//	for (int i = 5; i < count + 1; i++) {
//		v[i] = (!v[i - 1]) || (!v[i - 3]) || (!v[i - 4]);
//	}
//	cout << (v[count] ? "SK" : "CY") << '\n';
//}