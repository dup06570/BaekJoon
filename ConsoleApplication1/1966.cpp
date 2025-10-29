//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int test;
//	cin >> test;
//	for (int k = 0; k < test; k++) {
//		queue<vector<int>> q;
//		
//
//		int count;
//		int index;
//
//		cin >> count >> index;
//		vector<int> v(count);
//		
//		for (int i = 0; i < count; i++) {
//			cin >> v[i];
//			vector<int> a;
//			a.push_back(v[i]);
//			if (index == i) {
//				a.push_back(1);
//			}
//			else {
//				a.push_back(0);
//			}
//			q.push(a);
//		}
//		sort(v.begin(), v.end());
//		int b = 0;
//		int c = v.size() - 1;
//		while (q.size() > 0) {
//			if (q.front()[0] == v[c]) {
//				if (q.front()[1] == 1) {
//					cout << b + 1 << '\n';
//					break;
//				}
//				else {
//					b += 1;
//					c -= 1;
//					q.pop();
//				}
//			}
//			else {
//				q.push(q.front());
//				q.pop();
//			}
//		}
//	}
//}