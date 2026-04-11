#include <iostream>
#include <vector>


int lower_bound(std::vector<int>& nums, int t) {
    int l{};
    int r = nums.size();

    while (l < r) {
        int m = l + (r - l) / 2;

        if (nums[m] < t) {
            l = m + 1;
        }
        else {
            r = m;
        }
    }

    return l;
}

int main() {
    // std::vector<int> nums { -6, 3, 7, 15, 28 };
    std::vector<int> nums { 10, 20, 20, 20, 30 };

    std::cout << lower_bound(nums, 20);

}