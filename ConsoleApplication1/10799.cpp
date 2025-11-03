//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//    string s;
//    cin >> s;
//
//    long long ans = 0;
//    int open = 0;
//
//    for (int i = 0; i < (int)s.size(); ++i) {
//        if (s[i] == '(') {
//            open++;
//        }
//        else { // s[i] == ')'
//            if (s[i - 1] == '(') { // 레이저 "()"
//                open--;            // 방금 연 '(' 제거
//                ans += open;       // 현재 열린 막대기 수만큼 조각 증가
//            }
//            else {               // 막대 끝
//                open--;
//                ans += 1;          // 끝 조각 1개
//            }
//        }
//    }
//    cout << ans << '\n';
//    return 0;
//}