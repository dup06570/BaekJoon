//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <unordered_map>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//    int n;
//    cin >> n;
//
//    unordered_map<string, int> cnt;
//    cnt.reserve(n * 2);
//
//    
//    for (int i = 0; i < n; i++) {
//        string name;
//        cin >> name;
//        cnt[name] = 0;
//    }
//
//    // 개행 처리
//    for (int i = 0; i < n; i++) {
//        string line;
//        getline(cin, line);
//        string a = "";
//        for (int i = 0; i < line.size(); i++) {
//            if (line[i] == ' ' || i == line.size() - 1) { cnt[a] += 1; a = ""; }
//            else { a += line[i]; }
//        }
//    }
//    
//
//    //// 각 학생이 좋아하는 학생 목록 n줄
//    //for (int i = 0; i < n; i++) {
//    //    getline(cin, line);
//    //    stringstream ss(line);
//    //    string x;
//    //    while (ss >> x) {
//    //        
//    //        cnt[x]++;
//    //    }
//    //}
//
//    vector<pair<string, int>> v;
//    v.reserve(n);
//    for (auto& kv : cnt) v.push_back(kv);
//
//    sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
//        if (a.second != b.second) return a.second > b.second; // 인기도 내림차순
//        return a.first < b.first;                              // 이름 오름차순
//        });
//
//    for (auto& p : v) {
//        cout << p.first << ' ' << p.second << '\n';
//    }
//    return 0;
//
//}