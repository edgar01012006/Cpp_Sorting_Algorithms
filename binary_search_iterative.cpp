#include <iostream>
#include <vector>


int binary_search(std::vector<int>& nums, int t) {
    int l {0};
    int r = nums.size() - 1;

    while (l <= r) {
        int m =  l + (r - l) / 2;

        if (nums[m] > t) {
            r = m - 1;
        }
        else if (nums[m] < t) {
            l = m + 1;
        }
        else {
            return m;
        }
    }

    return -1;
}

int main() {
    // std::vector<int> nums { -6, 3, 7, 15, 28 };
    std::vector<int> nums { 1, 2, 3, 4, 5, 6, 7, 8 };

    std::cout << binary_search(nums, 7);

}