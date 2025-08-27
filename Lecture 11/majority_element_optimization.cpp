#include <iostream>
#include <vector>
#include <algorithm> // for sort()
using namespace std;

// Optimized Majority Element using Sorting
// Time Complexity: O(n log n)

int majority_element(vector<int> nums) {
    int n = nums.size();

    // Step 1: Sort array
    sort(nums.begin(), nums.end());

    // Step 2: Count frequencies
    int freq = 1, ans = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            freq++;
        } else {
            freq = 1;
            ans = nums[i];
        }

        // Majority condition
        if (freq > n / 2) {
            return nums[i]; // return the element immediately
        }
    }

    // No majority element found
    return -1;
}

int main() {
    vector<int> nums = {1, 2, 2, 2, 1};
    int ans = majority_element(nums);

    if (ans != -1)
        cout << "Majority Element: " << ans << endl;
    else
        cout << "No Majority Element found!" << endl;

    return 0;
}
