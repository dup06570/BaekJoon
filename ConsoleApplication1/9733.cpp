//#include <iostream>
//#include <algorithm>
//#include <map>
//#include <string>
//#include <iomanip>
//using namespace std;
//
//class Node {
//public:
//	map<string, int> m;
//	int size = 0;
//	void PrintNode(string input) {
//		cout << fixed << setprecision(2);
//		cout << input << " " << m[input] << " " << double(m[input]) / double(size) << '\n';
//	}
//	void PrintTotal() {
//		cout << "Total " << size << " 1.00";
//	}
//};
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	Node* n = new Node();
//	while (true) {
//		string input;
//		cin >> input;
//		if (cin.eof()) break;
//		n->m[input] += 1;
//		n->size += 1;
//	}
//	n->PrintNode("Re");
//	n->PrintNode("Pt");
//	n->PrintNode("Cc");
//	n->PrintNode("Ea");
//	n->PrintNode("Tb");
//	n->PrintNode("Cm");
//	n->PrintNode("Ex");
//	n->PrintTotal();
//	
//
//	
//}