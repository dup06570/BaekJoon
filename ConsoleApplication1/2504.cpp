//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <stack>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie();
//    string s;
//    if (!(cin >> s)) return 0;
//
//    stack<char> st;
//    long long res = 0;
//    long long mul = 1;
//
//    for (int i = 0; i < (int)s.size(); ++i) {
//        char c = s[i];
//        if (c == '(') {
//            st.push('(');
//            mul *= 2;
//        }
//        else if (c == '[') {
//            st.push('[');
//            mul *= 3;
//        }
//        else if (c == ')') {
//            if (st.empty() || st.top() != '(') { cout << 0 << '\n'; return 0; }
//            if (i > 0 && s[i - 1] == '(') res += mul; 
//            st.pop();
//            mul /= 2; 
//        }
//        else if (c == ']') {
//            if (st.empty() || st.top() != '[') { cout << 0 << '\n'; return 0; }
//            if (i > 0 && s[i - 1] == '[') res += mul; 
//            st.pop();
//            mul /= 3; 
//        }
//        
//    }
//
//    if (!st.empty()) { 
//        cout << 0 << '\n';
//    }
//    else {
//        cout << res << '\n';
//    }
//}