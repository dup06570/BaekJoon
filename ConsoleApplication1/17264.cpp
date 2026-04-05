//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <map>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int playCount;
//	int playerDataCount;
//	cin >> playCount >> playerDataCount;
//	int winP;
//	int loseP;
//	int Point;
//	cin >> winP >> loseP >> Point;
//	map<string, string>m;
//	for (int i = 0; i < playerDataCount; i++) {
//		string input;
//		cin >> input;
//		string data;
//		cin >> data;
//		m[input] = data;
//	}
//	int count = 0;
//	bool ironman = false;
//	for (int i = 0; i < playCount; i++) {
//		string input;
//		cin >> input;
//		if (m[input] == "W") { count += winP; }
//		else { count -= loseP; }
//		if (count < 0)count = 0;
//		if (count >= Point) { ironman = true; }
//	}
//	if (ironman) { cout << "I AM NOT IRONMAN!!"; }
//	else { cout << "I AM IRONMAN!!"; }
//}