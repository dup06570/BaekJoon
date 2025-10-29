//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int testCase;
//	cin >> testCase;
//	vector<string> v;
//	for (int i = 0; i <= testCase; i++) {
//		string input;
//		getline(cin, input);
//		if (input == "") { continue; }
//		string a = "";
//		string out = "";
//		reverse(input.begin(), input.end());
//		for (int j = 0; j < input.size(); j++) {
//			if (input[j] == ' ') {
//				reverse(a.begin(), a.end());
//				out += a + ' ';
//				a = "";
//			}
//			else if (j == input.size() - 1) {
//				a += input[j];
//				reverse(a.begin(), a.end());
//				out += a;
//			}
//			else {
//				a += input[j];
//			}
//		}
//
//		v.push_back(out);
//	}
//	for (int j = 0; j < v.size(); j++) {
//		cout << "Case #" << j + 1 << ": " << v[j] << '\n';
//	}
//}