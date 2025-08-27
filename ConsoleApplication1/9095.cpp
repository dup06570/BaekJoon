//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int TestCase;
//	cin >> TestCase;
//	for (int f = 0; f < TestCase; f++) {
//	int Input;
//	cin >> Input;
//
//	vector<int> OutV = { 0, 1, 2, 4 };
//	for (int i = 4; i <= Input; i++) {
//		OutV.push_back(OutV[i-1] + OutV[i -2] + OutV[i-3]);
//	}
//	
//	cout << OutV[Input] <<"\n";
//
//	}
//
//}