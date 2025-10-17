//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	queue<int> Q;
//	int size;
//	cin >> size;
//	int count;
//	cin >> count;
//	for (int i = 1; i <= size; i++) {
//		Q.push(i);
//	}
//
//	vector<int> V;
//	while (Q.size() > 1) {
//		for (int i = 1; i < count; i++) {
//			Q.push(Q.front());
//			Q.pop();
//		}
//		V.push_back(Q.front());
//		Q.pop();
//	}
//	V.push_back(Q.front());
//
//	cout << "<";
//	for (int i = 0; i < V.size(); i++) {
//		if (i == V.size() - 1) {
//			cout << V[i] << ">" << '\n';
//		}
//		else {
//			cout << V[i] << ", ";
//		}
//	}
//
//}