#include <iostream>
#include <algorithm>
#include <list>
#include <iterator>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	unordered_map<string, list<string>::iterator>m;
	list<string> order;
	int size;
	int count;
	cin >> size >> count;

	for (int i = 0; i < count; i++) {
		string input;
		cin >> input;
		auto it = m.find(input);
		if (it != m.end()) {
			order.erase(it->second);
		}
		order.push_back(input);
		m[input] = prev(order.end());
	}

	for (auto it = order.begin(); it != order.end() && size > 0; size--, it++) {
		cout << *it << '\n';
	}


}