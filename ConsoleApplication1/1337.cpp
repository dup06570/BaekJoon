//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	
//	int size;
//	cin >> size;
//	vector<long long> v;
//	for (int i = 0; i < size; i++) {
//		int input;
//		cin >> input;
//		v.push_back(input);
//	}
//	sort(v.begin(), v.end());
//	int m = 4;
//	int j = 0;
//	for (int i = 0; i < size; i++) {
//		while (j < size && v[j] <= v[i] + 4)j++;
//		int count = j - i;
//		m = min(m, 5 - count);
//	}
//
//	cout << m;
//
//
//}