#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Heap {
public:
	vector<int>v;
	void Push(int value) {
		v.push_back(value);

		int i = v.size() - 1;
		while (i > 0) {
			int p = (i - 1) / 2;
			if (v[p] > v[i]) {
				swap(v[p], v[i]);
			}
			else { return; }
			i = p;
		}
	}
	void Pop() {
		v[0] = v.back();
		v.pop_back();
		int n = v.size();
		int i = 0;
		while (i < n) {
			int l = i * 2 + 1;
			int r = i * 2 + 2;
			int mx = i;
			if (l < n && v[l] < v[mx]) mx = l;
			if (r < n && v[r] < v[mx]) mx = r;
			if (mx == i)return;
			swap(v[i], v[mx]);
			i = mx;
		}
	}

	int Top() {
		if (v.empty()) {
			return 0;
		}
		return v.front();
	}

	int Size() {
		return v.size();
	}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int count;
	cin >> count;

	//vector<int> v(count * count);
	Heap h;
	for (int i = 0; i < count * count; i++) {
		int input;
		cin >> input;
		h.Push(input);
		if (h.Size() > count) {
			h.Pop();
		}
		
	}

	//h.Pop();
	
	cout << h.Top();

}