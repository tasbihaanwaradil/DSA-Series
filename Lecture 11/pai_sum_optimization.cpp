#include <iostream>
#include <vector>
using namespace std;
//Pair Sum Optimization
vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();

    int i =0, j = n;
    while (i<n){
        int pair_sum = nums[i] + nums[j];
        if (pair_sum > target){
            j--;
        } else if(pair_sum < target){
            i++;
        } else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 13;

    vector<int> answer = pairSum(nums,target);
    cout << answer[0] << ", " << answer[1] << endl;
    return 0;
}