#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int TestCaset;
	cin >> TestCaset;
	for (int f = 0; f < TestCaset; f++) {
	int Input;
	cin >> Input;

	vector<vector<int>> OutV = { {1,0}, {0,1} };
	for (int i = 2; i <= Input; i++) {
		vector<int> ValueV = { OutV[i - 1][0] + OutV[i - 2][0], OutV[i - 1][1] + OutV[i - 2][1] };
		OutV.push_back(ValueV);
	}

	cout << OutV[Input][0] << " " << OutV[Input][1] << "\n";

	}

}