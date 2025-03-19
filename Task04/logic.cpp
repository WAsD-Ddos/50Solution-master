// Сумма элементов столбцов с экстремальными элементами
// [The Sum of elements of columns with extreme elements]
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию (или программу), которая 
// высчитывает сумму элементов в тех столбцах заданной матрицы,
// которые содержат хотя бы один экстремальный элемент.

#include "logic.h"



int get_max(int** matrix, int n, int m) {
    int maxElement = matrix[0][0];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
    }
    return maxElement;
}

int get_min(int** matrix, int n, int m) {
    int minElement = matrix[0][0];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] < minElement) {
                minElement = matrix[i][j];
            }
        }
    }
    return  minElement;
}
int sumOfExtremeColumns(int** matrix, int n, int m, int maxElement, int minElement) {

    int totalsum = 0;
    for (int j = 0; j < m; j++) {
        bool isExtremeColumn = false;
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] == maxElement || matrix[i][j] == minElement) {
                return true;
            }
        }
        if (isExtremeColumn) {
            for (int i = 0; i < n; ++i) {
                totalsum += matrix[i][j];
            }
        }
    }
    return totalsum;
}

int sum_elements_of_columns_with_extreme_value(int** matrix, int n, int m) {






    if (n <= 0 || m <= 0 || matrix == nullptr) { return 0; }
    int minElem = get_min(matrix, n, m);
    int maxElem = get_max(matrix, n, m);
	return sumOfExtremeColumns(matrix, n, m, maxElem, minElem);

}