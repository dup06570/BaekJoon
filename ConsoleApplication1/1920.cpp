//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int Size;
//	cin >> Size;
//
//	vector<int> V(Size);
//	for (int i = 0; i < Size; i++) {
//		cin >> V[i];
//	}
//	sort(V.begin(), V.end());
//
//	
//
//	int m;
//	cin >> m;
//	for (int i = 0; i < m; i++) {
//		int input;
//		cin >> input;
//		int Size_A = 0;
//		int Size_B = Size - 1;
//		bool found = false;
//		while (Size_A <= Size_B) {
//			int mid = (Size_B + Size_A) / 2;
//			if (V[mid] == input || V[Size_A] == input || V[Size_B] == input) {
//				cout << 1 << '\n';
//				found = true;
//				break;
//			}
//			if (V[mid] > input) {
//				Size_B = mid - 1;
//			}
//			else {
//				Size_A = mid + 1;
//			}
//		}
//		if (!found) { cout << 0 << '\n'; }
//	}
//
//	
//	
//}