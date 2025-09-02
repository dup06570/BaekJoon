//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <iomanip>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int Size;
//	cin >> Size;
//	vector<double> V(Size, 0);
//	for (int i = 0; i < Size; i++) {
//		cin >> V[i];
//	}
//
//	vector<double> OV = {V[0]};
//	for (int i = 1; i < Size; i++) {
//		OV.push_back(max(V[i], (OV[i - 1] * V[i])));
//		/*cout << i << "\n";
//		cout << "V[i]" << V[i] << " V[i-1] * V[i] " << V[i - 1] * V[i] <<"\n";*/
//	}
//
//	/*for (int i = 0; i < Size; i++) {
//		cout << OV[i] << " ";
//	}
//	cout << "\n";*/
//
//	double Value = 0;
//	for (int i = 0; i < Size; i++) {
//		if (Value < OV[i]) Value = OV[i];
//	}
//
//	cout << fixed << setprecision(3) <<Value;
//}