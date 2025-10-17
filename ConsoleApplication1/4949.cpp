//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <queue>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	string line;
//	while (true) {
//		if (!getline(cin, line))break;
//		if (line == ".")break;
//        vector<char> st;
//        bool ok = true;
//
//        for (char c : line) {
//            if (c == '(' || c == '[') {
//                st.push_back(c);
//            }
//            else if (c == ')') {
//                if (st.empty() || st.back() != '(') { ok = false; break; }
//                st.pop_back();
//            }
//            else if (c == ']') {
//                if (st.empty() || st.back() != '[') { ok = false; break; }
//                st.pop_back();
//            }
//        }
//        cout << ((ok && st.empty()) ? "yes" : "no") << '\n';
//	}
//}