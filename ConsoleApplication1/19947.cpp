//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	long long int Input;
//	int Year;
//	cin >> Input >> Year;
//	int Year_;
//	if (Year < 4) {
//		Year_ = 4;
//	}
//	else { Year_ = Year; }
//	vector<long long int> V(Year_ + 1, 0);
//	V[0] = Input;
//	V[1] = Input + (Input * 0.05);
//	V[2] = V[1] + (V[1] * 0.05);
//	V[3] = max(Input + (Input * 0.2), V[2] + (V[2] * 0.05));
//	V[4] = max(V[1] + (V[1] * 0.2), V[3] + (V[3] * 0.05));
//	for (int i = 5; i <= Year; i++) {
//		V[i] = max(V[i - 1] + (V[i - 1] * 0.05), max(V[i - 3] + (V[i - 3] *0.2), V[i - 5] + (V[i - 5] * 0.35)));
//	}
//
//	cout << V[Year];
//
//}