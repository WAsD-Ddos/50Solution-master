﻿// Среднее арифметическое ненулевых элементов
// [The arithmetic mean of non-zero elements]
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию (или программу), которая 
// вычисляет среднее арифметическое ненулевых элементов матрицы.

#include "logic.h"

double calculate_arithmetical_mean_of_nonzero_elements(int** matrix, int n, int m) {

    double sum_non_zero = 0;
    int count_non_zero = 0;
    //full-proof
    if (n <= 0 || m <= 0) {return 0;}
    if (matrix == nullptr) { return 0;}
    //test10 full-proof
    int  counts = 0;
    for (int i = 0; i < n; i++){for (int j = 0; j < m; j++){if ((matrix[i][j] == 0)) { counts++; }}}
    if (counts == (n * m)) {return 0;}

    //logic 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] != 0) {
                sum_non_zero += matrix[i][j];
                count_non_zero++;
            }
        }
    }


    double res = sum_non_zero / count_non_zero;
    return res;

}