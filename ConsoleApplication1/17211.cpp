//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//    int N, c;                
//    long double gg, gb, bg, bb;
//    cin >> N >> c;
//    cin >> gg >> gb >> bg >> bb;
//
//    long double good = 0.0L, bad = 0.0L;
//    if (c == 0) good = 1.0L;
//    else        bad = 1.0L;
//
//    for (int i = 1; i <= N; i++) {
//        long double ngood = good * gg + bad * bg;
//        long double nbad = good * gb + bad * bb;
//        good = ngood;
//        bad = nbad;
//    }
//
//    cout << (long long)llround(good * 1000.0L) << '\n';
//    cout << (long long)llround(bad * 1000.0L) << '\n';
//    return 0;
//}