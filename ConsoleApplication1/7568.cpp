//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int size;
//	cin >> size;
//	vector<pair<int, int>> p;
//	for (int i = 0; i < size; i++) {
//		int x, y;
//		cin >> x >> y;
//		pair<int, int> p_(x, y);
//		p.push_back(p_);
//	}
//	for (int i = 0; i < size; i++) {
//		int rank = 1; // 기본 1등에서 시작
//		for (int j = 0; j < size; j++) {
//			if (i == j) continue;
//			if (p[j].first > p[i].first && p[j].second > p[i].second) {
//				rank++;
//			}
//		}
//		cout << rank << (i + 1 == size ? '\n' : ' ');
//	}
//}