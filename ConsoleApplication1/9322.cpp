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
//	int testCase;
//	cin >> testCase;
//	for (int k = 0; k < testCase; k++) {
//		int size;
//		cin >> size;
//		
//		map<string, int> m;
//		map<int, int>m1;
//		for (int i = 0; i < size; i++) {
//			string input;
//			cin >> input;
//			m[input] = i;
//		}
//		for (int i = 0; i < size; i++) {
//			string input;
//			cin >> input;
//			m1[i] = m[input];
//		}
//
//		vector<string>v1(size,"");
//		vector<string>v2(size, "");
//
//		for (int i = 0; i < size; i++) {
//			string input;
//			cin >> input;
//			v1[m1[i]] = input;
//		}
//
//		for (int i = 0; i < v1.size(); i++) {
//			cout << v1[i] << " ";
//		}
//		cout << '\n';
//
//	}
//}