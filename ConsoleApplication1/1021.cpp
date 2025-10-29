//#include <iostream>
//#include <algorithm>
//#include <deque>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//
//
//	deque<int> d;
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)d.push_back(i);
//
//	int count = 0;
//	for (int j = 0; j < m; j++) {
//		int input;
//		cin >> input;
//		int pos = 0;
//		int index = 0;
//		for (int i = 0; i < d.size(); i++) {
//			if (d[i] == input) {
//				index = i;
//				break;
//			}
//		}
//		if (index > d.size() / 2) {
//			while (true) {
//				if (d.back() == input) {
//					pos += 1;
//					count += pos;
//					d.pop_back();
//					break;
//				}
//				d.push_front(d.back());
//				d.pop_back();
//				pos += 1;
//			}
//		}
//		else {
//			while (true) {
//				if (d.front() == input) {
//					count += pos;
//					d.pop_front();
//					break;
//				}
//				d.push_back(d.front());
//				d.pop_front();
//				pos += 1;
//			}
//		}
//		
//	}
//	
//	cout << count;
//}