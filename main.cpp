#include <iostream>
#include <vector>

float multiplicate(float vec, float matrix[4][4], int column) {
    float sum = 0.0f;
    for (int i = 0; i < 4; ++i) {
        sum += vec * matrix[i][column];
    }
    return sum;
}

int main() {
    std::vector<float> vec;
    float matrix[4][4];
    float temp;

    std::cout << "Input the Vector: ";
    for (int i = 0; i < 4; ++i) {
        std::cin >> temp;
        vec.push_back(temp);
    }
    std::cout << "Input the 4x4 matrix: ";
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << "(" << i+1 << ", " << j+1 << "): ";
            std::cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 4; ++i) {
        vec[i] = multiplicate(vec[i], matrix, i);
    }

    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    return 0;
}
