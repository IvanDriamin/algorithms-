#include <iostream>
#include <algorithm>
#include <vector>
static void BucketSort(int* a, int n) {
	int min = a[0];
	int max = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	int l = max - min + 1;
	std::vector<int>* b = new std::vector<int>[l];
	for (int i = 0; i < l; i++) {
		b[i] = std::vector<int>();
	}
	for (int i = 0; i < n; i++) {
		b[a[i] - min].push_back(a[i]);
	}
	int k = 0;
	for (int i = 0; i < l; i++) {
		int s = b[i].size();
		if (s > 0) {
			for (int j = 0; j < s; j++) {
				a[k] = b[i][j];
				k++;
			}
		}
	}
}
int main() {
	int const n = 7;
	int a[] = { -1, 25, -58964, 8547, -119, 0, 78596 };
	BucketSort(a, n);
	for (int i = 0; i < n; i++)
		std::cout << a[i] << "  ";
}