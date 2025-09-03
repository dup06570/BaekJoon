//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//	unsigned long long int TestCase;
//	cin >> TestCase;
//	for (unsigned long long int k = 0; k < TestCase; k++) {
//		unsigned long long int Input;
//		cin >> Input;
//		vector<unsigned long long int>V(Input + 1, 0);
//		V[0] = 1;
//		if(Input >0)
//		V[1] = 1;
//		if(Input > 1)
//		V[2] = 2;
//		if(Input > 2)
//		V[3] = 4;
//		for (unsigned long long int i = 4; i <= Input; i++) {
//			V[i] = V[i - 1] + V[i - 2] + V[i - 3] + V[i - 4];
//		}
//		cout << V[Input] << "\n";
//	}
//
//	
//}