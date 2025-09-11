//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int Input;
//	cin >> Input;
//
//	vector<vector<long long int>>V = { {0} , {0,1} };
//	for (int i = 2; i <= Input; i++) {
//		vector<long long int> V_(2, 0);
//		V_[0] = V[i - 1][1] + V[i - 1][0];
//		V_[1] = V[i - 1][0];
//		V.push_back(V_);
//	}
//	cout << V[Input][0] + V[Input][1];
//}