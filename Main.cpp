#include <iostream>
#include <vector>

std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int>>& matrix) {
	int max;
	int i1 = 0;
	int j1 = 0;
	for (int i = 0; i != (int)matrix.size(); i++) {
		for (int j = 0; j != (int)matrix[i].size(); j++) {
			if (matrix[i][j] > max) {
				max = matrix[i][j];
					i1 = i;
					j1 = j;
			}
		}
	}
	return {i1, j1};
}

int main() {
	int a, b;
	std::cin >> a >> b;
	std::vector<std::vector<int>> vector(a, std::vector<int>(b));

	for (int i = 0; i != a; i++) {
		for (int j = 0; j != b; j++) {
			std::cin >> vector[i][j];
		}
	}

	std::pair<size_t, size_t> pair = MatrixArgMax(vector);
	std::cout << pair.first << " " << pair.second;










}