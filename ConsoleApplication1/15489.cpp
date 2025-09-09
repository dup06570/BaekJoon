//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//	int R;
//	int C;
//	int W;
//	int Input;
//	cin >> R >> C >> W;
//	Input = R + W - 1;
//	vector<vector<int>> V = { {0}, {1}, {1,1} };
//	for (int i = 3; i <= Input; i++) {
//		vector<int> Value(i , 1);
//		for (int j = 1; j < i- 1; j++) {
//			Value[j] = V[i - 1][j - 1] + V[i - 1][j];
//		}
//
//		V.push_back(Value);
//	}
//	int answer = 0;
//	int B = C;
//
//	/*cout << V[W][C] << "\n";
//	cout << V[W][C + 1] << "\n";*/
//
//	for (int i = 0; i < W; ++i) {          
//		for (int j = 0; j <= i; ++j) {     
//			answer += V[R + i][C + j - 1];
//		}
//	}
//
//	cout << answer;
//}