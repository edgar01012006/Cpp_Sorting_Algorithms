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

void counting_sort(std::vector<int>& nums, int exp);

void radix_sort(std::vector<int>& nums) {
    auto max = std::max_element(nums.begin(), nums.end());
    int max_el = *max;

    for (int exp{1}; max_el / exp > 0; exp *= 10) {
        counting_sort(nums, exp);

        // print_vector(nums);
        // print_vector_size(nums);
    }
}

void counting_sort(std::vector<int>& nums, int exp) {
    std::vector<int> count(10);

    // print_vector(count);
    // print_vector_size(count);
    
    for (int n: nums) { 
        int digit = (n / exp) % 10;
        ++count[digit];
    }

    // print_vector(count);
    // print_vector_size(count);

    for (int i{1}; i < count.size(); ++i) {
        count[i] += count[i - 1];
    }

    // print_vector(count);
    // print_vector_size(count);

    std::vector<int> out(nums.size());

    for (int i = nums.size() - 1; i >= 0; --i) {
        int digit = (nums[i] / exp) % 10;
        out[--count[digit]] = nums[i];
    }

    // print_vector(out);
    // print_vector_size(out);

    nums = std::move(out);
}



int main() {

    // std::vector<int> nums { -6, 3, 48, 48, 7, 15, 2 };
    // std::vector<int> nums { -3, -4, 5, 1, 1, 2, 0, 0, -4, -20 };
    std::vector<int> nums { 111, 121, 256, 16 };

    print_vector(nums);
    print_vector_size(nums);

    radix_sort(nums);

    print_vector(nums);
    print_vector_size(nums);

}