//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int x;
//	int y;
//	cin >> x >> y;
//	vector<vector<long long int>> v(y + 1, vector<long long int>(x + 1, 0));
//	v[1][1] = 1;
//	for (int i = 1; i <= y; i++) {
//		for (int j = 1; j <= x; j++) {
//			long long int sum = 0;
//			if (i != 1) {
//				sum += v[i - 1][j];
//				if (j != 1) sum += v[i - 1][j - 1];
//			}
//			if (j != 1) sum += v[i][j - 1];
//			if (j == 1 && i == 1) { continue; }
//			v[i][j] = sum % 1000000007;
//			//cout << sum;
//		}
//	}
//	cout << v[y][x];
//
//}