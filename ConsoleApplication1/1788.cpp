//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	long long int count;
//	cin >> count;
//
//	
//	//v.push_back(0);
//	if (count > 0) {
//		vector<long long int> v(count + 1);
//		v[0] = 0;
//		v[1] = 1;
//
//		for (long long int i = 2; i <= count; i++) {
//			v[i] = (v[i - 1] + v[i - 2]) % 1000000000;
//		}
//		cout << 1 << '\n';
//		cout << v[count] << '\n';
//	}
//	else if (count < 0) {
//		long long int value = count * (-1);
//		vector<long long int> v(value + 1);
//		
//		v[0] = 0;
//		v[1] = 1;
//
//		for (long long int i = 2; i <= value; i++) {
//			v[i] = (v[i - 2] - v[i - 1]) % 1000000000;
//		}
//		if (v[value] > 0) {
//			cout << 1 << '\n';
//			cout << v[value] << '\n';
//		}
//		else if(v[value] < 0) {
//			cout << -1 << '\n';
//			cout << (v[value] * (-1)) << '\n';
//		}
//		else {
//			cout << 0 << '\n';
//			cout << 0 << '\n';
//		}
//	}
//	else {
//		cout << 0 << '\n';
//		cout << 0 << '\n';
//	}
//}