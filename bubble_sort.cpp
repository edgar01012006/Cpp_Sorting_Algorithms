#include <vector>
#include <utility>
#include <iostream>

void bubble_sort(std::vector<int>& vec) {
  for (size_t i{}; i < vec.size() - 1; ++i) {
    bool swapped{};
    
    for (size_t j{}; j < vec.size() - i - 1; ++j) {
      if (vec[j] > vec[j + 1]) {
        std::swap(vec[j], vec[j + 1]);
        swapped = true;
      }
    }
    if (!swapped) {
      break;
    }
  }  
}

void print_vector(std::vector<int>& vec) {
  for (size_t i{}; i < vec.size(); ++i) {
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;
}

int main() {
  std::vector<int> vec { 9, 5, 7, 6, 4, 10 };
  // std::vector<int> vec { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
  // std::vector<int> vec { 1, 2, 3, 4, 5, 6 };

  print_vector(vec);

  bubble_sort(vec);

  print_vector(vec);

}