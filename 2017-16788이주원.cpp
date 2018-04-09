#include <iostream>
#include <vector>

using namespace std;

void swap(int *a, int *b) { int tmp = *a; *a = *b; *b = tmp; }

void main() {
	vector<int> vec;
	int num;
	while (cin >> num) {
		vec.push_back(num);
	}

	for (int i = 0; i < vec.size()-1; i++) {
		for (int j = 0; j < vec.size()-1-i; j++) {
			if (vec[j] < vec[j + 1]) { swap(&vec[j], &vec[j + 1]); }
		}
	}
	cout << "ordered array\n";
	for (auto i : vec) {
		cout << i<<" ";
	}
	cout<<"" << endl;
}