//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//long long comb[31][31];
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int n;
//    cin >> n;
//
//
//    for (int i = 0; i <= 30; i++) {
//        comb[i][0] = 1;
//        comb[i][i] = 1;
//    }
//
//    for (int i = 2; i <= 30; i++) {
//        for (int j = 1; j < i; j++) {
//            comb[i][j] = comb[i - 1][j - 1] + comb[i - 1][j];
//        }
//    }
//
//    cout << comb[2 * n][n] << ' ' << 1LL * n * n << '\n';
//    return 0;
//}