//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//    int N;
//    if (!(cin >> N)) return 0;
//    int good = 0;
//
//    while (N--) {
//        string s;
//        cin >> s;
//        vector<char> st;
//        st.reserve(s.size());
//
//        for (char c : s) {
//            if (!st.empty() && st.back() == c) st.pop_back();
//            else st.push_back(c);
//        }
//        if (st.empty()) ++good;
//    }
//    cout << good << '\n';
//    return 0;
//	
//
//}