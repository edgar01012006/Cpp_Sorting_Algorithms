#include <vector>
#include <iostream>
#include <iterator>
#include <utility>


void bubble_sort_iterator(std::vector<int>& vec) {

  for (auto endIter{ std::prev(vec.end()) }; endIter != vec.begin(); --endIter) {
    bool swapped{};

    for (auto beginIter{ vec.begin() }; beginIter < endIter; ++beginIter) {
      auto next = std::next(beginIter);
      if (*beginIter > *next) {
        std::swap(*beginIter, *next);
        swapped = true;
      }
    }

    if (!swapped) {
      break;
    }
  }
}

void print_vector(std::vector<int>& vec) {
  for (auto begin = vec.begin(); begin != vec.end(); ++begin) {
    std::cout << *begin << " ";
  }
  std::cout << std::endl;
}

int main() {
  std::vector<int> vec { 9, 5, 7, 6, 4, 10 };
  // std::vector<int> vec { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
  // std::vector<int> vec { 1, 2, 3, 4, 5, 6 };

  print_vector(vec);

  bubble_sort_iterator(vec);

  print_vector(vec);
}