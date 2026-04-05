//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//    int N;
//    cin >> N;
//
//    int size[6];
//    for (int i = 0; i < 6; i++) {
//        cin >> size[i];
//    }
//
//    int T, P;
//    cin >> T >> P;
//
//    int tshirtBundle = 0;
//    for (int i = 0; i < 6; i++) {
//        tshirtBundle += (size[i] + T - 1) / T;
//    }
//
//    cout << tshirtBundle << '\n';
//    cout << N / P << ' ' << N % P << '\n';
//
//    return 0;
//}