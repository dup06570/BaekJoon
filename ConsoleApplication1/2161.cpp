//#include <iostream>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//
//	queue<int> Q;
//	int count;
//	cin >> count;
//	for (int i = 1; i <= count; i++) {
//		Q.push(i);
//	}
//	while (Q.size() > 1) {
//		cout << Q.front() << " ";
//		Q.pop();
//		Q.push(Q.front());
//		Q.pop();
//	}
//
//	cout << Q.front();
//}