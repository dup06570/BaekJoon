//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <map>
//#include <unordered_map>
//
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int count;
//	int findCount;
//	cin >> count >> findCount;
//	unordered_map<string, string> pw;
//    pw.reserve(count * 2);        // 리해시 줄이기
//    pw.max_load_factor(0.7f); // 성능 안정화
//
//    for (int i = 0; i < count; ++i) {
//        string site, pass;
//        cin >> site >> pass;
//        pw.emplace(move(site), move(pass));
//    }
//
//    string q;
//    string out;
//    out.reserve(findCount * 21); 
//    for (int i = 0; i < findCount; ++i) {
//        cin >> q;
//        auto it = pw.find(q);
//        out += it->second;
//        out.push_back('\n');
//    }
//
//    cout << out;
//    return 0;
//}