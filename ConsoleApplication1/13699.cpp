//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//	int Input;
//	cin >> Input;
//	vector<long long int>V = { 1 , 1};
//	for (int i = 2; i <= Input; i++) {
//		long long int value = 0;
//		int j = 0;
//		while (j < i) {
//			value += V[j] * V[i - 1 - j];
//			j++;
//		}
//		V.push_back(value);
//	}
//	cout << V[Input];
//}