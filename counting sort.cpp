#include <iostream>
#include <vector>
std::vector<int> countSort(std::vector<int>& a) {
	int N = a.size();
	int M = 0;
	for (int i = 0; i < N; i++)
		if (a[i] > M)
			M = a[i];
	std::vector<int> c(M + 1, 0);
	for (int i = 0; i < N; i++)
		c[a[i]]++;
	for (int i = 1; i <= M; i++)
		c[i] += c[i - 1];
	std::vector<int> A(N);
	for (int i = N - 1; i >= 0; i--) {
		A[c[a[i]] - 1] = a[i];
		c[a[i]]--;
	}
	return A;
}
int main() {
	std::vector<int> a = { 4, 3, 12, 1, 5, 5, 3, 9 };
	std::vector<int> A = countSort(a);
	for (int i = 0; i < a.size(); i++)
		std::cout << A[i] << "  ";
}