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

void counting_sort(std::vector<int>& nums) {
    auto [min_elem_it, max_elem_it] = std::minmax_element(nums.begin(), nums.end());

    auto min_elem = *min_elem_it;
    auto max_elem = *max_elem_it;

    auto frequency_map_size = std::abs(min_elem) + std::abs(max_elem) + 1;

    std::vector<int> frequency_map(frequency_map_size, 0);   

    for (size_t i{}; i < nums.size(); ++i) {
        ++frequency_map[nums[i] - min_elem];
    }

    for (size_t i{}, start{}; i < frequency_map_size; ++i) {
        while (frequency_map[i]--) {
            nums[start++] = i + min_elem;
        }
    }
}

int main() {

    std::vector<int> nums { -6, 3, 48, 48, 7, 15, 2 };
    // std::vector<int> nums { 5, 1, 1, 2, 0, 0 };

    print_vector(nums);
    print_vector_size(nums);

    counting_sort(nums);

    print_vector(nums);
    print_vector_size(nums);

}