#include "Searching.cpp"
#include <iostream>
#include <vector>
#include <array>

int main() {
    std::array<int, 10> arr = {1, 2, 3, 3, 3, 4, 5, 6, 7, 8};
    std::vector<int> vec = {1, 2, 3, 3, 3, 4, 5, 6, 7, 8};

    int target = 3;

    // Test binarySearchFirst for std::array
    int firstIndexArr = binarySearchFirst(arr, target);
    std::cout << "First occurrence of " << target << " in array: " << firstIndexArr << "\n";

    // Test binarySearchFirst for std::vector
    int firstIndexVec = binarySearchFirst(vec, target);
    std::cout << "First occurrence of " << target << " in vector: " << firstIndexVec << "\n";

    return 0;
}
