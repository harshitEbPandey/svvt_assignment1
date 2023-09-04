#include <gtest/gtest.h>
#include "heapsort.h"

TEST(HeapifyTest, HeapifyWithValidInput) {
    std::vector<int> arr = {3, 1, 4, 1, 5, 9};
    heapify(arr, arr.size(), 0);
    
    // Add your assertions to check if the heapify function works as expected for a min-heap
    ASSERT_EQ(arr[0], 4);
    ASSERT_EQ(arr[1], 1);
    ASSERT_EQ(arr[2], 9);
    // ... Add more assertions as needed
}

TEST(HeapSortTest, HeapSortWithValidInput) {
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};
    heapSort(arr);
    
    // Add your assertions to check if the heapSort function produces a sorted array in ascending order
    ASSERT_EQ(arr[0], 5);
    ASSERT_EQ(arr[1], 6);
    ASSERT_EQ(arr[2], 7);
    // ... Add more assertions as needed
}

TEST(HeapifyTest, InputValidation) {
    std::vector<int> arr = {9, 5, 4, 1, 6, 3};
    heapify(arr, arr.size(), 0);
    
    // Add your assertions to check if all elements in the array are integers
    for (const auto& num : arr) {
        ASSERT_EQ(typeid(num), typeid(int));
    }
}

TEST(HeapifyTest, NegativeInputValidation) {
    std::vector<int> arr = {9, 5, 4, 1, 'c', 3};
    heapify(arr, arr.size(), 0);
    
    // Add your assertions to check if all elements in the array are integers
    for (const auto& num : arr) {
        ASSERT_EQ(typeid(num), typeid(int));
    }
}

TEST(HeapSortTest, HeapSortWithNegativeNumbers) {
    std::vector<int> arr = {-12, -11, -13, -5, -6, -7};
    heapSort(arr);
    
    // Add your assertions to check if the heapSort function produces a sorted array with negative numbers
    for (int i = 0; i < arr.size() - 1; i++) {
        ASSERT_LE(arr[i], arr[i + 1]); // Check if the array is sorted in ascending order
    }
}

TEST(HeapSortTest, HeapSortWithAllElements) {
    std::vector<int> arr = {9, 5, 4, 1, 6, 3};
    heapSort(arr);
    
    // Add your assertions to check if the heapSort function produces a sorted array with all elements
    for (int i = 0; i < arr.size() - 1; i++) {
        ASSERT_LE(arr[i], arr[i + 1]); // Check if the array is sorted in ascending order
    }
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
