#include <iostream>
#include <vector>


int binary_search(std::vector<int>& nums, int l, int r, int t) {
    if (l > r) return -1;

    int m = l + (r - l) / 2;

    if (nums[m] > t)
        return binary_search(nums, l, m - 1, t);
    else if (nums[m] < t)
        return binary_search(nums, m + 1, r, t);
    else
        return m;
}

int main() {
    // std::vector<int> nums { -6, 3, 7, 15, 28 };
    std::vector<int> nums { 1, 2, 3, 4, 5, 6, 7, 8 };

    std::cout << binary_search(nums, 0, nums.size() - 1, 7);

}