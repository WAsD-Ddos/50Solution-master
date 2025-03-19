// Количество строк с большим количество положительных элементов
// [The Number of rows with a large number of positive elements]
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию(или программу), которая находит
// количество строк, в которых положительных элементов больше 
// чем всех остальных (отрицательных и нулевых).

#include "logic.h"

int count_rows_with_more_positive_values(int** matrix, int n, int m) {
    if (n <= 0 || m <= 1) { return 0; }
    if (matrix == nullptr) { return 0; }

    int countRows = 0;
    for (int i = 0; i < n; ++i) {
        int positiveCount = 0;
        int negativeCount = 0;
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] > 0) {
                positiveCount++;
            }
            else if (matrix[i][j] < 0) {
                negativeCount++;
            }
        }
        if (positiveCount > negativeCount) {
            countRows++;
        }
    }

	return countRows;
}