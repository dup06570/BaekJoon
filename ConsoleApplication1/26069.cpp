//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <map>
//
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	map<string, bool>m;
//	int count;
//	int c = 0;
//	cin >> count;
//	for (int i = 0; i < count; i++) {
//		string inputA;
//		string inputB;
//		cin >> inputA >> inputB;
//
//		
//		if (inputA == "ChongChong" || inputB == "ChongChong") {
//			m[inputA] = true;
//			m[inputB] = true;
//		}
//		else if (m[inputA] || m[inputB]) {
//			m[inputA] = true;
//			m[inputB] = true;
//		}
//
//	}
//
//	for (auto a = m.begin(); a != m.end(); a++) {
//		if (a->second) {
//			c += 1;
//		}
//	}
//	cout << c;
//
//}