//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	string line;
//	getline(cin, line);
//	vector<string> v;
//	int index = 0;
//	while (index < line.size() - 1) {
//		
//		string a = "";
//		bool b = false;
//		for (int i = index; i < line.size(); i++) {
//			if (line[i] == ' ' && !b) {
//				v.push_back(a);
//				index += 1;
//				break;
//			}
//			else if (line[i] == '>') {
//				a += '>';
//				index += 1;
//				v.push_back(a);
//				b = false;
//				break;
//			}
//			else if (line[i] == '<') {
//				b = true;
//				v.push_back(a);
//				a = "";
//			}
//			else if (i == line.size() - 1) {
//				a += line[i];
//				v.push_back(a);
//				continue;
//			}
//			a += line[i];
//			index += 1;
//		}
//		
//	}
//
//	
//	for (int i = 0; i < v.size(); i++) {
//		//string a = v[i];
//		if (v[i][0] == '<') {
//			cout << v[i];
//		}
//		else {
//			string a = v[i];
//			//cout << a << '\n';
//			reverse(a.begin(), a.end());
//			//cout << "test " << v[i];
//			if (i != v.size() - 1 && v[i + 1][0] != '<') {
//				cout << a << " ";
//				continue;
//			}
//			cout << a;
//		}
//	}
//	
//}