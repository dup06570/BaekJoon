//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	unsigned long long int Input;
//	cin >> Input;
//	vector<unsigned long long int> OutV = { 0, 1,1 };
//	for (unsigned long long int i = 3; i <= Input; i++) {
//		OutV.push_back(OutV[i - 1] + OutV[i - 2]);
//	}
//
//	if (Input == 1) {
//		cout << 4;
//	}
//	else {
//		cout << (OutV[Input] * 4) + (OutV[Input - 1] * 2);
//	}
//}