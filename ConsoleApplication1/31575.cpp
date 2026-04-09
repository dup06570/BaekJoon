//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int x, y;
//	cin >> x >> y;
//	vector<vector<int>> map(y, vector<int>(x, 0));
//
//	vector<vector<int>> v(y, vector<int>(x, 0));
//
//	for (int i = 0; i < y; i++) {
//		for (int j = 0; j < x; j++) {
//			int input_;
//			cin >> input_;
//			map[i][j] = input_;
//		}
//
//	}
//	v[0][0] = map[0][0];
//	for (int i = 0; i < y; i++) {
//		for (int j = 0; j < x; j++) {
//			if (map[i][j] == 0||(i == 0 && j == 0)) { continue; }
//			if (i - 1 >= 0 && v[i - 1][j] != 0) {
//				v[i][j] = v[i - 1][j];
//			}
//			if (j - 1 >= 0 && v[i][j - 1] != 0) {
//				v[i][j] = v[i][j - 1];
//			}
//		}
//	}
//
//	if (v[y - 1][x - 1] != 0) {
//		cout << "Yes";
//	}
//	else { cout << "No"; }
//}