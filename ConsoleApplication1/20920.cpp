//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//#include <string>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int N, M;
//    cin >> N >> M;
//
//    unordered_map<string, int> freq;
//    freq.reserve(N * 2);
//
//    for (int i = 0; i < N; ++i) {
//        string w;
//        cin >> w;
//        if ((int)w.size() >= M) ++freq[w];
//    }
//
//    vector<string> words;
//    words.reserve(freq.size());
//    for (auto& p : freq) words.push_back(p.first);
//
//    auto cmp = [&](const string& a, const string& b) {
//        if (freq[a] != freq[b]) return freq[a] > freq[b];           
//        if (a.size() != b.size()) return a.size() > b.size();        
//        return a < b;                                                
//        };
//
//    sort(words.begin(), words.end(), cmp);
//
//    for (auto& w : words) cout << w << '\n';
//    return 0;
//}