//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int Size;
//	cin >> Size;
//	vector<int> V;
//	for (int i = 0; i < Size; i++) {
//		int Value;
//		cin >> Value;
//		V.push_back(Value);
//	}
//
//	vector<int> AV(Size, 1);
//	vector<int> BV(Size, 1);
//
//	int A = V[0];
//	int A_ = 1;
//	int B = V[0];
//	int B_ = 1;
//	for (int i = 1; i < Size; i++) {
//		if (A <= V[i]) {
//			A_ += 1;
//			if (AV[i-1] <= A_) {
//				AV[i] = A_;
//			}
//			else {
//				AV[i] = AV[i - 1];
//			}
//		}
//		else {
//			A_ = 1;
//			AV[i] = AV[i - 1];
//
//		}
//		if (B >= V[i]) {
//			B_ += 1;
//			if (BV[i-1] <= B_) {
//				//cout << BV[i] << " " << B_ << " ";
//				BV[i] = B_;
//			}
//			else {
//				BV[i] = BV[i - 1];
//			}
//		}
//		else {
//			B_ = 1;
//			BV[i] = BV[i - 1];
//		}
//		A = V[i];
//		B = V[i];
//	}
//
//	/*for (int i = 0; i < BV.size(); i++) {
//		cout << BV[i];
//	}*/
//
//	//cout << AV[Size - 1] << BV[Size - 1] << "\n";
//
//	cout << max(AV[Size - 1], BV[Size - 1]);
//}