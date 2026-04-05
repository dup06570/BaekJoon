//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	string input;
//	cin >> input;
//	vector<int> v(9, 0);
//	int count = 0;
//	for (int i = 0; i < input.size(); i++) {
//		if (input[i] == '6' || input[i] == '9') {
//			if (v[6] == 0) {
//				count += 1;
//				for (int j = 0; j < v.size(); j++) {
//					v[j] += 1;
//				}
//				v[6] += 1;
//			}
//			v[6] -= 1;
//		}
//		else {
//			int index = (int)(input[i] - '0');
//			if (v[index] == 0) {
//				count += 1;
//				for (int j = 0; j < v.size(); j++) {
//					v[j] += 1;
//				}
//				v[6] += 1;
//			}
//			v[index] -= 1;
//		}
//	}
//	cout << count;
//}