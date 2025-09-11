//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int Input;
//	cin >> Input;
//
//	vector<int> V(Input + 1, 0);
//	int i = 1;
//	V[0] = 0;
//	for (int i = 1; i <= Input; i++) {
//		V[i] = i;
//		for (int j = 1; j * j <= i; j++) {
//			V[i] = min(V[i], V[i - j * j] + 1);
//		}
//	}
//	cout << V[Input];
//}