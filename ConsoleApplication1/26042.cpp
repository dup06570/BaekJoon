//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	queue<int>q;
//	
//	int n;
//	cin >> n;
//
//	int count = 0;
//	int mzSize = 0;
//
//	for (int i = 0; i < n; i++) {
//		int input;
//		cin >> input;
//		if (input == 1) {
//			int input1;
//			cin >> input1;
//			q.push(input1);
//			if (q.size() > mzSize) {
//				
//				mzSize = q.size();
//				count = input1;
//			}
//			else if (q.size() == mzSize) {
//				if (count > input1)count = input1;
//			}
//
//		}
//		else {
//			if (!q.empty()) {
//				q.pop();
//			}
//		}
//	}
//
//	cout << mzSize << " " << count;
//
//}