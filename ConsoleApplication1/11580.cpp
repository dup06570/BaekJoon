//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <map>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int x = 0;
//	int y = 0;
//
//	int count;
//	cin >> count;
//	string input;
//	cin >> input;
//	map<pair<int, int>, int>m;
//	m[pair<int, int>(0, 0)] += 1;
//	for (int i = 0; i < input.size(); i++) {
//		switch (input[i]) {
//		case 'S':
//			y -= 1;
//			break;
//		case 'N':
//			y += 1;
//			break;
//		case 'E':
//			x += 1;
//			break;
//		case 'W':
//			x -= 1;
//			break;
//		default:
//			break;
//		}
//		pair<int, int>p(x, y);
//		m[p] += 1;
//
//	}
//	cout << m.size();
//}