//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	vector<vector<int>> OutV = { {1,0} };
//	int Input;
//	cin >> Input;
//	for (int i = 1; i <= Input; i++) {
//		vector<int> Value = {0 , 0};
//		Value[1] += OutV[i - 1][1];
//		Value[1] += OutV[i - 1][0];
//		Value[0] += OutV[i - 1][1];
//		OutV.push_back(Value);
//	}
//
//	cout << OutV[Input][0] << " " << OutV[Input][1];
//
//}