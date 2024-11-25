#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

// Template function for binary search in std::array
template <typename T, size_t N>
int binarySearch(const std::array<T, N>& arr, T target) {
    int left = 0, right = N - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

// Template function for binary search in std::vector
template <typename T>
int binarySearch(const std::vector<T>& vec, T target) {
    int left = 0, right = vec.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (vec[mid] == target) return mid;
        if (vec[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

// Template function for binarySearchFirst in std::array
template <typename T, size_t N>
int binarySearchFirst(const std::array<T, N>& arr, T target) {
    int index = binarySearch(arr, target);
    if (index == -1) return -1;

    // Backtrack to find the first occurrence
    while (index > 0 && arr[index - 1] == target) {
        --index;
    }
    return index;
}

// Template function for binarySearchFirst in std::vector
template <typename T>
int binarySearchFirst(const std::vector<T>& vec, T target) {
    int index = binarySearch(vec, target);
    if (index == -1) return -1;

    // Backtrack to find the first occurrence
    while (index > 0 && vec[index - 1] == target) {
        --index;
    }
    return index;
}
