#include <iostream>
#include <vector>

int main() {
    int n;

    // Input the size of the square matrix
    std::cout << "Enter the size of the square matrix: ";
    std::cin >> n;

    // Create a 2D vector to store the matrix
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));

    // Input the elements of the matrix
    std::cout << "Enter the elements of the matrix:" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // Calculate the sum of the main diagonal
    int sum_main_diagonal = 0;
    for (int i = 0; i < n; ++i) {
        sum_main_diagonal += matrix[i][i];
    }

    // Calculate the sum of the secondary diagonal
    int sum_secondary_diagonal = 0;
    for (int i = 0; i < n; ++i) {
        sum_secondary_diagonal += matrix[i][n - 1 - i];
    }

    // Display the sums of both diagonals
    std::cout << "Sum of the main diagonal: " << sum_main_diagonal << std::endl;
    std::cout << "Sum of the secondary diagonal: " << sum_secondary_diagonal << std::endl;

    return 0;
}
