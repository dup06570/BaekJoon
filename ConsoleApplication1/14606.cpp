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
//	int Input;
//	cin >> Input;
//
//	vector<int> OutV = { 0, 0 };
//	int Value = 0;
//	for (int i = 2; i <= Input; i++) {
//		int A = i / 2;
//		int B = (i / 2) + (i % 2);
//		int C = 0;
//		while (A >= 1) {
//			C = max(C, (A * B) + OutV[A] + OutV[B]);
//			A -= 1;
//			B += 1;
//		}
//		OutV.push_back(C);
//	}
//	cout << OutV[Input];
//}
