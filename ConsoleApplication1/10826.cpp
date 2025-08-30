#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string PlusString(const string& A, const string& B) {
    int i = (int)A.size() - 1, j = (int)B.size() - 1, carry = 0;
    string out;
    out.reserve(max(A.size(), B.size()) + 1);
    while (i >= 0 || j >= 0 || carry) {
        int s = carry
            + (i >= 0 ? A[i] - '0' : 0)
            + (j >= 0 ? B[j] - '0' : 0);
        out.push_back(char('0' + (s % 10)));
        carry = s / 10;
        --i; --j;
    }
    reverse(out.begin(), out.end());
    return out;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    if (n == 0) { cout << 0; return 0; }
    if (n == 1) { cout << 1; return 0; }

    string f0 = "0", f1 = "1";
    for (int i = 2; i <= n; ++i) {
        string f = PlusString(f0, f1);
        f0.swap(f1);
        f1.swap(f);
    }
    cout << f1;
}