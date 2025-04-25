#include <iostream>
#include <vector>

std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int>>& matrix) {
	int max = 0;
	int imax = 0;
	int jmax = 0;
	for (int i = 0; i != (int)matrix.size(); i++) {
		for (int j = 0; j != (int)matrix[i].size(); j++) {
			if (matrix[i][j] > max) {
				max = matrix[i][j];
					imax = i;
					jmax = j;
			}
		}
	}
	return {imax, jmax};
}
