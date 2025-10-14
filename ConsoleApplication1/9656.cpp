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
//
//	vector<bool> OutV(max(4, Input + 1), false);
//
//	OutV[1] = false;
//
//	for (int i = 2; i <= Input; i++) {
//		bool Win = false;
//
//		if (i - 1 >= 1 && !OutV[Input - 1]) Win = true;
//
//		if (!Win && i - 3 >= 1 && !OutV[i - 3]) Win = true;
//		OutV[i] = Win;
//	}
//
//	cout << (OutV[Input] ? "SK" : "CY") << "\n";
//	
//}