//#include <iostream>
//#include <algorithm>
//#include <stack>
//#include <queue>
//#include <vector>
//using namespace std;
//
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N;
//	cin >> N;
//
//	vector<int> type(N);        
//	for (int i = 0; i < N; ++i) cin >> type[i];
//
//	deque<int> D;               
//	for (int i = 0; i < N; ++i) {
//		int a;
//		cin >> a;               
//		if (type[i] == 0) {
//			D.push_back(a);     
//		}
//	}
//
//	int K;
//	cin >> K;
//	while (K--) {
//		int x;
//		cin >> x;
//		if (D.empty()) {
//			cout << x << ' ';
//		}
//		else {
//			cout << D.back() << ' ';
//			D.pop_back();
//			D.push_front(x);
//		}
//	}
//	return 0;
//}