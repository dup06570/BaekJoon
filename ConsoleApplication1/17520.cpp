//#include <algorithm>
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//static const long long MOD = 16769023;
//
//long long mod_pow(long long a, long long e) {
//    long long r = 1 % MOD;
//    a %= MOD;
//    while (e > 0) {
//        if (e & 1) r = (r * a) % MOD;
//        a = (a * a) % MOD;
//        e >>= 1;
//    }
//    return r;
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    long long n;
//    cin >> n;
//
//    long long exp = (n + 1) / 2;          // floor((n+1)/2)
//    cout << mod_pow(2, exp) << "\n";
//    return 0;
//}