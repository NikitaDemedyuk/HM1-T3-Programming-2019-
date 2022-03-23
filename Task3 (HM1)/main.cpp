//
//  main.cpp
//  Task3 (HM1)
//
//  Created by Никита on 11/24/19.
//

#include <iostream>
#include <vector>
#include <cassert>

std::vector <std::vector <int>> buildMatrix(const int &size) {
    std::vector <std::vector <int>> array(size, std::vector <int>(size));
    std::cout << "\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << "Array [ " << i << " ][ " << j << " ] = ";
            std::cin >> array[i][j];
        }
    }
    return array;
}

bool isSimmetric(const std::vector<std::vector<int>> &matrix) {
    bool flagSimmetric {true};
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] != matrix[j][i]) {
                flagSimmetric = false;
            }
        }
    }
    return flagSimmetric;
}

void printMatrix(const std::vector<std::vector<int>> &matrix) {
    std::cout << "\n";
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

int main() {
    int size {0};
    std::cout << "Size of an array: ";
    std::cin >> size;
    assert(size >= 0);
    
    std::vector<std::vector<int>> matrix = buildMatrix(size);
    
    bool flagSimmetric = isSimmetric(matrix);
    
    printMatrix(matrix);
    
    if (flagSimmetric) {
        std::cout << "Great! A symmetric array!";
    } else {
        std::cout << "Not a symmetric array :(";
    }
    
    return 0;
}
