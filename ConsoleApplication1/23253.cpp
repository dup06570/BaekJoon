//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <stack>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int book;
//	int size;
//	cin >> book >> size;
//	vector<stack<long long>>v;
//	bool check = false;
//	for (int i = 0; i < size; i++) {
//		int inputSize;
//		cin >> inputSize;
//		stack <long long>s;
//		for (int j = 0; j < inputSize; j++) {
//			int input;
//			cin >> input;
//			if (!s.empty()) { if (input > s.top())check = true; }
//			s.push(input);
//		}
//		v.push_back(s);
//	}
//	
//	if (check) { cout << "No"; }
//	else {
//		cout << "Yes";
//	}
//}