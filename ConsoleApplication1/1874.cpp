//#include <iostream>
//#include <algorithm>
//#include <stack>
//#include <vector>
//using namespace std;
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//    int n;
//    if (!(cin >> n)) return 0;
//
//    stack<int> st;
//    vector<char> ops;      
//    int nextPush = 1;     
//
//    for (int i = 0; i < n; ++i) {
//        int x;
//        cin >> x;
//
//
//        while (nextPush <= x) {
//            st.push(nextPush++);
//            ops.push_back('+');
//        }
//
//        if (st.empty() || st.top() != x) {
//            cout << "NO\n";
//            return 0;
//        }
//        st.pop();
//        ops.push_back('-');
//    }
//
//
//    for (char c : ops) cout << c << '\n';
//    return 0;
//	
//}