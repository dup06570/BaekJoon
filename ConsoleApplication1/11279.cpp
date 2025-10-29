//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//class Heap {
//public:
//	vector<unsigned int> v;
//
//	Heap() {
//	}
//
//	void Push(unsigned int value) {
//		v.push_back(value);
//		int i = v.size() - 1;
//		if (v.size() > 1) {
//			while (i > 0) {
//				int p = (i - 1) / 2;        
//				if (v[p] >= v[i]) break;    
//				swap(v[p], v[i]);
//				i = p;
//			}
//		}
//		
//	}
//
//	void Pop() {
//		if (v.size() == 0) {
//			cout << 0 << '\n';
//		}
//		else {
//			cout << v[0] << '\n';
//			v[0] = v.back();
//			v.pop_back();
//			int n = v.size();
//			int i = 0;
//			while (true) {
//				int l = i * 2 + 1;
//				int r = i * 2 + 2;
//				int mx = i;
//
//				if (l < n && v[l] > v[mx]) mx = l;
//				if (r < n && v[r] > v[mx]) mx = r;
//				if (mx == i)break;
//				swap(v[i], v[mx]);
//				i = mx;
//			}
//		}
//	}
//};
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int count;
//	cin >> count;
//
//	Heap* h = new Heap();
//
//	for (int i = 0; i < count; i++) {
//		int input;
//		cin >> input;
//
//		if (input == 0) {
//			h->Pop();
//		}
//		else {
//			h->Push(input);
//		}
//	}
//	
//}