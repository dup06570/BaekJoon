//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//
//bool LessThan(const string& a, const string& b) {
//    if (a.size() != b.size()) return a.size() < b.size();
//    return a < b;
//}
//
//bool LessEqual(const string& a, const string& b) {
//    return !LessThan(b, a);
//}
//
//string AddString(const string& a, const string& b) {
//    string result = "";
//    int i = (int)a.size() - 1;
//    int j = (int)b.size() - 1;
//    int carry = 0;
//
//    while (i >= 0 || j >= 0 || carry > 0) {
//        int sum = carry;
//
//        if (i >= 0) {
//            sum += a[i] - '0';
//            i--;
//        }
//        if (j >= 0) {
//            sum += b[j] - '0';
//            j--;
//        }
//
//        result += (char)(sum % 10 + '0');
//        carry = sum / 10;
//    }
//
//    reverse(result.begin(), result.end());
//    return result;
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    vector<string> fib;
//    fib.push_back("1");
//    fib.push_back("2");
//
//    string limit = "1";
//    for (int i = 0; i < 100; i++) {
//        limit += '0';
//    }
//
//    while (LessEqual(fib.back(), limit)) {
//        int n = (int)fib.size();
//        fib.push_back(AddString(fib[n - 1], fib[n - 2]));
//    }
//
//    string a, b;
//    while (cin >> a >> b) {
//        if (a == "0" && b == "0") break;
//
//        int cnt = 0;
//        for (int i = 0; i < (int)fib.size(); i++) {
//            if (LessThan(b, fib[i])) break;
//            if (LessEqual(a, fib[i]) && LessEqual(fib[i], b)) {
//                cnt++;
//            }
//        }
//
//        cout << cnt << '\n';
//    }
//
//    return 0;
//}