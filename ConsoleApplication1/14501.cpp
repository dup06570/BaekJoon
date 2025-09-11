//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int Size;
//	cin >> Size;
//	vector<vector<int>> V;
//	for (int i = 0; i < Size; i++) {
//		vector<int> A(2, 0);
//		cin >> A[0] >> A[1];
//		V.push_back(A);
//	}
//	vector<int> V_(Size + 1, 0);
//	for (int i = 0; i < Size; i++) {
//		int Value = V_[i];
//		Value += V[i][1];
//		/*if (i == 9) {
//			cout << Value << "\n";
//		}*/
//		if (i + V[i][0] > Size) {
//			//V_[Size - 1] = max(V_[Size - 1], Value);
//			Value -= V[i][1];
//			V_[Size] = max(V_[Size], Value);
//			continue;
//		}
//		else if (i + V[i][0] == Size) {
//			V_[Size] = max(V_[Size], Value);
//			continue;
//		}
//		for (int j = i + V[i][0]; j < Size; j++) {
//			V_[j] = max(V_[j], Value);
//		}
//	}
//	cout << V_[Size];
//}