//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int Input;
//	cin >> Input;
//	vector<int> OutV = { 0, 1,2 };
//	for (int i = 3; i <= Input; i++) {
//		OutV.push_back((OutV[i - 1] + OutV[i - 2]) % 10007);
//	}
//	cout << OutV[Input];
//}