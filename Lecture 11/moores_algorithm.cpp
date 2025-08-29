// Moore's Voting Algorithm (Most Optimized Approach)
// Problem: Find the Majority Element in an array
// Majority Element = element that appears more than n/2 times

#include <iostream>
#include <vector>
using namespace std;

int find_majority_el(vector<int> nums) {
    int n = nums.size();
    int freq = 0;     // counter to track balance
    int answer = 0;   // candidate for majority element

    // Step 1: Find a candidate using Moore's Voting Algorithm
    for (int i = 0; i < n; i++) {
        if (freq == 0) {
            // pick new candidate when freq is 0
            answer = nums[i];
        }
        if (answer == nums[i]) {
            // if same as candidate, increase frequency
            freq++;
        } else {
            // if different, decrease frequency
            freq--;
        }
    }

    // Step 2: Return the candidate
    // Note: In real problems, we often verify the candidate
    return answer;
}

// Driver Code
int main() {
    vector<int> nums = {1, 2, 2, 1, 1, 3, 3, 3, 3, 3};
    cout << "Majority Element: " << find_majority_el(nums) << endl;
    return 0;
}
