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
//	int N, K;
//	cin >> N >> K;
//	vector<vector<int>> V = { {0}, {1}, {1, 1} };
//
//	for (int i = 3; i <= N; i++) {
//		vector<int> Value(i, 1);
//		for (int j = 1; j < i-1; j++) {
//			Value[j] = V[i - 1][j - 1] + V[i - 1][j];
//		}
//		V.push_back(Value);
//	}
//	cout << V[N][K - 1];
//}