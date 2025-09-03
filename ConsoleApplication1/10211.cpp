//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int TestCase;
//	cin >> TestCase;
//	for (int k = 0; k < TestCase; k++) {
//		int Size;
//		cin >> Size;
//		vector<int> InputV(Size, 0);
//		for (int i = 0; i < Size; i++) {
//			cin >> InputV[i];
//		}
//		vector<int> OutputV;
//		OutputV.push_back(InputV[0]);
//		for (int i = 1; i < Size; i++) {
//			if (OutputV[i - 1] + InputV[i] < InputV[i])
//				OutputV.push_back(InputV[i]);
//			else {
//				OutputV.push_back(OutputV[i - 1] + InputV[i]);
//			}
//		}
//
//		int Value = OutputV[0];
//		for (int i = 1; i < OutputV.size(); i++) {
//			Value = max(OutputV[i], Value);
//		}
//
//		cout << Value << "\n";
//
//	}
//}