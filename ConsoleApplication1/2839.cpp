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
//	vector<int> SugerV = { 0,-1,-1,1,-1,1};
//
//	int Input;
//	cin >> Input;
//
//	cout << "test" << "\n";
//	for (int i = 6; i <= Input; i++) {
//		if (SugerV[i - 3] != -1 && SugerV[i-5] != -1) {
//			int Value = min(SugerV[i - 3] + 1, SugerV[i - 5] + 1);
//			cout << "test1" << "\n";
//			SugerV.push_back(Value);
//		}
//		else if (SugerV[i - 3] == -1) {
//			if (SugerV[i - 5] == -1) {
//				SugerV.push_back(-1);
//				cout << "test2" << "\n";
//				continue;
//			}
//			SugerV.push_back(SugerV[i - 5] + 1);
//		}
//		else {
//			if (SugerV[i - 5] == -1) {
//				SugerV.push_back(SugerV[i - 3] + 1);
//				
//				cout << "test3" << "\n";
//				continue;
//			}
//			SugerV.push_back(-1);
//			cout << "test4" << "\n";
//		}
//		
//	}
//
//	cout << SugerV[Input];
//}