//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int testCase;
//	cin >> testCase;
//	for (int k = 0; k < testCase; k++) {
//		long long p;
//		long long q;
//		cin >> p >> q;
//		long long n = p;
//		long long a = 0 % q;
//		long long b = 1 % q;
//		
//		while (n > 1) {
//			long long c = b;
//			b = (a + b) % q;
//			a = c;
//			n -= 1;
//		}
//		cout << "Case #" << k + 1 << ": " << b << '\n';
//	}
//}