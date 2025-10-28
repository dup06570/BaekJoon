//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//class LinkNode {
//public:
//	int value = 0;
//	int index = 0;
//	LinkNode* LN = nullptr;
//	LinkNode* RN = nullptr;
//	LinkNode() {
//
//	}
//
//	void RemoveNode() {
//		if (!LN || !RN) return;
//
//		if (LN == this && RN == this) {
//			return;
//		}
//		if (LN == RN) {
//			LN->LN = LN->RN = LN;
//		}
//		else {
//			LN->RN = RN;
//			RN->LN = LN;
//		}
//	}
//
//};
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int count;
//	cin >> count;
//	vector<LinkNode*> v;
//	for (int i = 0; i < count; i++) {
//		int input;
//		cin >> input;
//		LinkNode* N = new LinkNode();
//		N->value = input;
//		N->RN = N;
//		N->LN = N;
//		N->index = i + 1;
//		v.push_back(N);
//		
//		if (i == 0) {
//			continue;
//		}
//		v[i - 1]->RN = v[i];
//		v[i]->LN = v[i - 1];
//
//		if (i == count - 1) {
//			v[0]->LN = v[i];
//			v[i]->RN = v[0];
//		}
//	}
//
//	LinkNode* Node = v[0];
//	vector<int> v_;
//	for (int i = 0; i < count; i++) {
//		Node->RemoveNode();
//		cout << Node->index << " ";
//		v_.push_back(Node->index);
//		if (v_.size() == count) break;
//		int value = Node->value;
//		if (value > 0) {
//			for (int j = 0; j < value; j++) {
//				Node = Node->RN;
//			}
//		}
//		else {
//			for (int j = 0; j > value; j--) {
//				Node = Node->LN;
//			}
//		}
//	}
//
//
//}