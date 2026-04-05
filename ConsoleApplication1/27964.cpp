//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <map>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int size;
//	cin >> size;
//	int count = 0;
//	map<string, int> m;
//	for (int i = 0; i < size; i++) {
//		string input;
//		cin >> input;
//		m[input] += 1;
//	}
//	for (auto it = m.begin(); it != m.end(); it++) {
//		string a = "";
//		string in = it->first;
//		for (int i = in.size() - 6; i < in.size() && i >= 0; i++) {
//			a += in[i];
//		}
//		if (a == "Cheese") { count += 1; }
//	}
//
//	if (count >= 4) { cout << "yummy"; }
//	else { cout << "sad"; }
//
//}