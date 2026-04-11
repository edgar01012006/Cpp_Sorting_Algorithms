#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>

void print_vector(const std::vector<int>& nums) {
    std::cout << "\nPrinting vector elements\n";
    for (auto begin = nums.begin(); begin != nums.end(); ++begin) {
        std::cout << *begin << " ";
    }
    std::cout << "\n";
}

void print_vector_size(const std::vector<int>& nums) {
    std::cout << "size = " << nums.size() << std::endl;
}

void insertion_sort(std::vector<int>& nums) {
    for (size_t i{1}; i < nums.size(); ++i) {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            --j;
        }
        nums[j + 1] = key;
    }
}

int main() {

    // std::vector<int> nums { -6, 3, 48, 48, 7, 15, 2 };
    std::vector<int> nums { 5, 1, 1, 2, 0, 0 };
    // std::vector<int> nums { 5, 3, 10, -25, 9, 33};

    print_vector(nums);
    print_vector_size(nums);

    insertion_sort(nums);

    print_vector(nums);
    print_vector_size(nums);

}