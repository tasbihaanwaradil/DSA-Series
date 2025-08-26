#include <iostream>
#include <vector>
using namespace std;

//function to find majority element in an array
int majority_element(vector<int> nums){
    int n = nums.size();

    // Pick each element one by one
    for(int val: nums){
        int freq = 0;

        // Count how many times 'val' occurs
        for (int el: nums){
            if(el == val){
                freq ++;
            }
        }
        // Check majority condition
        if(freq > n/2){
            return val;
        }
    }
    // No majority element
    return -1;
}

int main(){
    vector<int> nums = {1,2,2,2,1};
    cout << "Majority Element: " << majority_element(nums) << endl;
    return 0;
}