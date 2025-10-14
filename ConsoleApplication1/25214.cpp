//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//
//	vector<long long int> OutVM;
//	vector<long long int> Out;
//
//	int Count;
//	cin >> Count;
//	for (int k = 0; k < Count; k++) {
//		long long int Input;
//		cin >> Input;
//		if (k == 0) {
//			Out.push_back(0);
//			OutVM.push_back(Input);
//			continue;
//		}
//		if (Input < OutVM[k - 1]) { 
//			OutVM.push_back(Input); 
//			Out.push_back(Out[k - 1]);
//			continue;
//		}
//		OutVM.push_back(OutVM[k - 1]);
//		if (Out[k - 1] < (Input - OutVM[k])) Out.push_back(Input - OutVM[k]);
//		else Out.push_back(Out[k - 1]);
//	}
//
//	for (int k = 0; k < Count; k++) {
//		cout << Out[k] << " ";
//	}
//	cout << "\n";
//	
//}
