//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <set>
//
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int size;
//	cin >> size;
//	set<string> s;
//	for (int i = 0; i < size + size - 1; i++) {
//		string input;
//		cin >> input;
//		if(s.size() != 0 && s.find(input) != s.end()){
//			s.erase(input);
//		}
//		else { s.insert(input); }
//	}
//	cout << *s.begin();
//}