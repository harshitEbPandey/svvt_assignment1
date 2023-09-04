#include <gtest/gtest.h>
#include "heapsort.h"

TEST(HeapifyTest, HeapifyWithValidInput) {
    std::vector<int> arr = {3, 1, 4, 1, 5, 9};
    heapify(arr, arr.size(), 0);
    
    // Add your assertions to check if the heapify function works as expected for a min-heap
    ASSERT_EQ(arr[1], 1);
    ASSERT_EQ(arr[2], 4);
}

TEST(HeapSortTest, HeapSortWithValidInput) {
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};
    heapSort(arr);
    
    // Add your assertions to check if the heapSort function produces a sorted array in ascending order
    ASSERT_EQ(arr[0], 5);
    ASSERT_EQ(arr[1], 6);
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}