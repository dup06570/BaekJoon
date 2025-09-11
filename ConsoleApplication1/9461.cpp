//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int TestCase;
//	cin >> TestCase;
//	for (int k = 0; k < TestCase; k++) {
//		int Input;
//		cin >> Input;
//		vector<long long int> V = { 0,1,1,1,2,2 };
//		for (int i = 6; i <= Input; i++) {
//			V.push_back(V[i - 1] + V[i - 5]);
//		}
//		cout << V[Input] << "\n";
//	}
//}