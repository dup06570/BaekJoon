//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	queue<pair<int, int>>q;
//	
//
//	int size;
//	cin >> size;
//	vector<int> v(size, 0);
//	int count = 0;
//	for (int i = 0; i < size; i++) {
//		int input;
//		cin >> input;
//		pair<int, int>p(i, input);
//		q.push(p);
//	}
//	while (!q.empty()) {
//		pair<int, int> p = q.front();
//		q.pop();
//		count += 1;
//		p.second -= 1;
//		if (p.second == 0) { v[p.first] = count; continue; }
//		q.push(p);
//	}
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i] << ' ';
//	}
//}