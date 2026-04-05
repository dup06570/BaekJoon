//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <map>
//#include <string>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int count, find, select;
//    cin >> count >> find >> select;
//
//    vector<pair<int, string>> v;
//    v.reserve(count);
//
//    map<string, int> m;   // name -> score
//    for (int i = 0; i < count; i++) {
//        string name;
//        int score;
//        cin >> name >> score;
//        m[name] = score;
//        v.push_back({ score, name });
//    }
//
//    map<string, int> m2;  // already selected names
//    for (int i = 0; i < select; i++) {
//        string input;
//        cin >> input;
//        m2[input]++;
//    }
//
//    sort(v.begin(), v.end()); // score 오름차순
//
//    int need = find - select; // 추가로 뽑아야 하는 인원 수
//    int minS = 0, maxS = 0;
//
//    // 최소 합
//    int l1 = 0, r1 = (int)v.size() - 1;
//    for (int got = 0; got < need; ) {
//        while (l1 <= r1 && m2[v[l1].second] > 0) l1++;
//        if (l1 > r1) break; // 불가능 케이스(입력이 보장되면 return 처리해도 됨)
//        minS += v[l1].first;
//        l1++;
//        got++;
//    }
//
//    // 최대 합
//    int l2 = 0, r2 = (int)v.size() - 1;
//    for (int got = 0; got < need; ) {
//        while (l2 <= r2 && m2[v[r2].second] > 0) r2--;
//        if (l2 > r2) break;
//        maxS += v[r2].first;
//        r2--;
//        got++;
//    }
//
//    int total = 0;
//    for (auto& kv : m2) total += m[kv.first];
//
//    cout << minS + total << ' ';
//    cout << maxS + total << '\n';
//}