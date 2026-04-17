//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//string s;
//
//int recursion(int l, int r, int& count) {
//	count += 1;
//	if (l >= r)return 1;
//	else if (s[l] != s[r])return 0;
//	else return recursion(l + 1, r - 1, count);
//}
//
//int isPalindrome(int& count) {
//	return recursion(0, s.length() - 1, count);
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int TestCase;
//	cin >> TestCase;
//	
//	for (int i = 0; i < TestCase; i++) {
//		cin >> s;
//		int c = 0;
//		cout << isPalindrome(c) << ' ' << c << '\n';
//	}
//	
//
//
//}