//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	vector<int> TestV = { 0,0,1,1 };
//	int Input;
//	cin >> Input;
//	for (int i = 4; i <= Input; i++) {
//		int Value1 = 9999999;
//			int Value2 = 9999999;
//			int Value3 = 9999999;
//		if (i % 3 == 0) {
//			Value1 = TestV[i / 3] + 1;
//			
//		}
//		if (i % 2 == 0) {
//			Value2 = TestV[i / 2] + 1;
//			
//		}
//		Value3 = TestV[i - 1] + 1;
//		TestV.push_back(min(Value1, min(Value2, Value3)));
//	}
//
//	cout << TestV[Input];
//}