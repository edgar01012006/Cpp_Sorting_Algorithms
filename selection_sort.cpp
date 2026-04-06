#include <iostream>
#include <vector>
#include <utility>

void selection_sort(std::vector<int>& nums) {
  for (size_t i{}; i < nums.size() - 1; ++i) {
    size_t min = i;

    for (size_t j{ i + 1 }; j < nums.size(); ++j) {
      if (nums[min] > nums[j]) {
        min = j;
      }
    }

    if (min != i) {
      std::swap(nums[min], nums[i]);
    }
  }
}

void print_vector(std::vector<int>& nums) {
  for (size_t i{}; i < nums.size(); ++i) {
    std::cout << nums[i] << " ";
  }
  std::cout << std::endl;
}

int main() {
  std::vector<int> vec { 9, 5, 7, 6, 4, 10 };
  // std::vector<int> vec { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
  // std::vector<int> vec { 1, 2, 3, 4, 5, 6 };

  print_vector(vec);

  selection_sort(vec);

  print_vector(vec);

}