//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//
//using namespace std;
//string AddString(string a, string b) {
//    string result = "";
//    int carry = 0;
//
//    reverse(a.begin(), a.end());
//    reverse(b.begin(), b.end());
//
//    int n = max(a.size(), b.size());
//
//    for (int i = 0; i < n; i++) {
//        int x = 0;
//        int y = 0;
//
//        if (i < a.size()) x = a[i] - '0';
//        if (i < b.size()) y = b[i] - '0';
//
//        int sum = x + y + carry;
//        result += char(sum % 10 + '0');
//        carry = sum / 10;
//    }
//
//    if (carry > 0) result += char(carry + '0');
//
//    reverse(result.begin(), result.end());
//    return result;
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    vector<string> dp;
//    dp.push_back("1"); // dp[0]
//    dp.push_back("1"); // dp[1]
//
//    int n;
//    while (cin >> n && n != -1) {
//        while ((int)dp.size() <= n) {
//            dp.push_back(AddString(dp[dp.size() - 1], dp[dp.size() - 2]));
//        }
//
//        cout << "Hour " << n << ": " << dp[n-1] << " cow(s) affected\n";
//    }
//
//    return 0;
//}