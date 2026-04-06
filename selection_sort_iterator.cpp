#include <iostream>
#include <utility>
#include <vector>
#include <iterator>

void selection_sort_iterator(std::vector<int>& nums) {
  for (auto IbeginIter{ nums.begin() }; IbeginIter < std::prev(nums.end()); ++IbeginIter) {
    auto minIter = IbeginIter;

    for (auto JbeginIter { std::next(IbeginIter) }; JbeginIter < nums.end(); ++JbeginIter) {
      if (*minIter > *JbeginIter) {
        minIter = JbeginIter;
      }
    }

    if (minIter != IbeginIter) {
      std::swap(*minIter, *IbeginIter);
    }
  }
}

void print_vector(std::vector<int>& nums) {
  for (auto begin = nums.begin(); begin != nums.end(); ++begin) {
    std::cout << *begin << " ";
  }
  std::cout << std::endl;
}

int main() {
  std::vector<int> vec { 9, 5, 7, 6, 4, 10 };
  // std::vector<int> vec { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
  // std::vector<int> vec { 1, 2, 3, 4, 5, 6 };

  print_vector(vec);

  selection_sort_iterator(vec);

  print_vector(vec);
}