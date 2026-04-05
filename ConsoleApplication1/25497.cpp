//#include <iostream>
//#include <vector>
//#include <stack>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int N;
//    cin >> N;
//
//    string input;
//    cin >> input;
//
//    int cnt = 0;
//    int L = 0; 
//    int S = 0; 
//
//    for (char c : input) {
//        if ('1' <= c && c <= '9') {
//            cnt++; 
//        }
//        else if (c == 'L') {
//            L++;
//        }
//        else if (c == 'S') {
//            S++;
//        }
//        else if (c == 'R') {
//            if (L == 0) break;   
//            L--;
//            cnt++;
//        }
//        else if (c == 'K') {
//            if (S == 0) break;   
//            S--;
//            cnt++;
//        }
//    }
//
//    cout << cnt << "\n";
//    return 0;
//}