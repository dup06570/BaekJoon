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
//	vector<int> OutV = { 0,-1,1,-1,2,1};
//
//	int Input;
//	cin >> Input;
//	for (int i = 6; i <= Input; i++) {
//		if (OutV[i - 2] == -1) {
//			if (OutV[i - 5] == -1) {
//				OutV.push_back(-1);
//			}
//			else {
//				OutV.push_back(OutV[i - 5] + 1);
//			}
//		}
//		else if (OutV[i - 5] == -1) {
//			if (OutV[i - 2] == -1) {
//				OutV.push_back(-1);
//			}
//			else {
//				OutV.push_back(OutV[i - 2] + 1);
//			}
//		}
//		else {
//			OutV.push_back(min(OutV[i - 2], OutV[i - 5]) + 1);
//		}
//	}
//	cout << OutV[Input];
//}