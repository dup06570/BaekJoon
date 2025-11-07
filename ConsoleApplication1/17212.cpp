//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	
//	int count;
//	cin >> count;
//	int answer = count;
//	if (count < 7)count = 7;
//
//	vector<long long int> v(count + 1);
//	v[0] = 0;
//	v[1] = 1;
//	v[2] = 1;
//	v[3] = 2;
//	v[4] = 2;
//	v[5] = 1;
//	v[6] = 2;
//	v[7] = 1;
//
//	for (int i = 8; i <= answer; i++) {
//		long long int input = min({ v[i - 1], v[i - 2], v[i - 5], v[i - 7] }) + 1;
//		v[i] = input;
//	}
//	
//	cout << v[answer];
//}