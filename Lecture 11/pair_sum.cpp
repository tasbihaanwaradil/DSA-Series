#include <iostream>
#include <vector>
using namespace std;
//Pair Sum Function Brute Force Approach
vector<int> pair_sum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    // return empty vector if no solution is found
    return {};

}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> ans = pair_sum(nums,target);

    if(!ans.empty()){
        cout << ans[0] << ", " << ans[1] << endl;
    } else {
        cout << "No pair found!" << endl;
    }
    
    return 0;

}
