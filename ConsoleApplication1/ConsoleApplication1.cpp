//#include <iostream>
//#include <algorithm>
//#include <cmath>
//using namespace std;
////int main() {
////	ios::sync_with_stdio(false);
////	cin.tie(nullptr);
////
////	double A, a, B, b;
////
////	int N;
////	double today;
////	cin >> N >> today;
////
////	cin >> A >> a >>  B >> b;
////
////	double out = today;
////
////	while(N > 0) {
////		double out_ = 1 - out;
////		out = (out * A) + (out_ * B);
////		N -= 1;
////	}
////	double out_ = 1 - out;
////	cout << round(out * 1000)  << '\n';
////	cout << round(out_ * 1000) << '\n';
////
////	return 0;
////}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int N, today;
//    cin >> N >> today;
//
//    double A, a, B, b;
//    cin >> A >> a >> B >> b;
//
//    double bad, good;
//
//    if (today == 0) {
//        bad = 1.0;
//        good = 0.0;
//    }
//    else {
//        bad = 0.0;
//        good = 1.0;
//    }
//
//    while (N--) {
//        double nextBad = bad * A + good * B;
//        double nextGood = bad * a + good * b;
//        bad = nextBad;
//        good = nextGood;
//    }
//
//    cout << round(bad * 1000) << '\n';
//    cout << round(good * 1000) << '\n';
//
//    return 0;
//}